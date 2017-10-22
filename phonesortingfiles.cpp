#include<stdio.h>
#include<string.h>
void sort(int k);
struct data
{
	char name[30],phno[30];
}sd[10];
int main()
{
	FILE *fp;char ch,name[20],number[10];int i=0,j=0,k=0;
	fp=fopen("E:\\phdata.txt","r");
	if(fp==NULL)
	{
		printf("ERROR fILe NOT fOUND");
	}
	while((ch=getc(fp))!=EOF)
	{
		i=0;
		while(!(ch>='1'&&ch<='9'))
		{
			name[i++]=ch;
			ch=getc(fp);
		}
		name[i++]='\0';
	   

		j=0;
		while(ch!='\n'&&ch!=EOF)
			{
				number[j++]=ch;
				ch=getc(fp);
			}
			number[j]='\0';
			strcpy(sd[k].phno,number);
			strcpy(sd[k].name,name);
	
			k++;
	}
	sort(k);
	

	/*for(i=0;i<4;i++)
	{
		printf("%s\t%s\n",sd[i].name,sd[i].phno);
	}*/


return 0;
}
void sort(int k)
{
	int i=0,j=0;
	char temp[20];
	for(i=0;i<k-1;i++)
	{
		for(j=i+1;j<k;j++)
		{
			if(strcmp(sd[i].name,sd[j].name)>0)
			{
				strcpy(temp,sd[i].name);
				strcpy(sd[i].name,sd[j].name);
				strcpy(sd[j].name,temp);
				strcpy(temp,sd[i].phno);
				strcpy(sd[i].phno,sd[j].phno);
				strcpy(sd[j].phno,temp);
			}
		}
	}
	for(i=0;i<k;i++)
	{
		printf("%s\t%s\n",sd[i].name,sd[i].phno);
	}
}

