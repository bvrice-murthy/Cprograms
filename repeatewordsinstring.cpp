#include<stdio.h>
#include<malloc.h>
void repeatestring(char *string)
{
	int i=0,j=0,k=0,l=0;char *string1;
	while(string[i]!='\0')
	{
		if(string[i]>='0'&&string[i]<='9')
		{
			k+=string[i]-'0';
			
		}
		else
		{j++;
		}
		i++;
	}
	string1=(char *)malloc((k+j+1)*sizeof(char));
	i=0,j=0,k=0,l=0;
	while(string[i]!='\0')
	{	
		k=0;
		if(string[i]>='0'&&string[i]<='9')
		{
			k=string[i]-'0';
			
		}
		for(j=0;j<k;j++)
		{
			string1[l]=string[i-1];
			l++;
		}
		i++;
	}
	string1[l]='\0';
	puts(string1);
}
int main()
{
	int range;char *string;
	printf("Enter the range");
	scanf("%d",&range);
	string=(char *)malloc((range)+1*sizeof(char));
	printf("Enter %d length string",range);
	gets(string);
	gets(string);
	repeatestring(string);
	return 0;
}


