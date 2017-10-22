#include<stdio.h>
#include<string.h>
int converttointeger(char *s);
struct student
{
	char name[20];
	int maxmarks;
};
void calculate(FILE *fp)
{
	char ch,temp[20],name[20];
	int i,j,marks;
	struct student s[6];
	
	for(i=0;i<6;i++)
		s[i].maxmarks=0;
	while((ch=getc(fp))!=EOF)
	{
		i=0;
		while(ch!=',')
		{
			name[i++]=ch;
			ch=getc(fp);
		}
		name[i]='\0';
		for(j=0;j<6;j++)
		{
			ch=getc(fp);
			i=0;

			while(ch>='1'&&ch<='9')
			{
				temp[i++]=ch;
				ch=getc(fp);
			}
			temp[i]=ch;
			marks=converttointeger(temp);
			if(marks>s[j].maxmarks)
			{
				s[j].maxmarks=marks;
				strcpy(s[j].name,name);
			}
			else if(marks==s[j].maxmarks)
			{
				strcat(s[j].name," & ");
				strcat(s[j].name,name);
			}
		}
	}
	fclose(fp);
	for(i=0;i<6;i++)
		printf("\n subject%d: %s\n",i+1,s[i].name);

}

	int main()
	{
		FILE *fp;
		fp=fopen("E:\\marks.txt","r");
		if(fp==NULL)
		{
			printf("ERROR cannot read file");
		}
		else
		{
			calculate(fp);
		}
		return 0;
	}
	
int converttointeger(char *s)
{
	int temp=0,r,i=0;
while(s[i]>='0'&&s[i]<='9')
	{
		temp*=10;
		r=s[i]-'0';
		temp+=r;
		i++;
	}
return temp;
}
	