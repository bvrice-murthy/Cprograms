#include<stdio.h>
#include<malloc.h>
int stringlength(char *string,int i)
{
	
	if(string[i]=='\0')
		return i;
	else
	{
	return	stringlength(string,i+1);
	}
}
int main()
{
	int range,length=0;char *string;
	printf("Enter the range of the string");
	scanf("%d",&range);
	string=(char *)malloc(range+1*sizeof(char));
	gets(string);
	gets(string);
	printf("The string length is\n");
	length=stringlength(string,length);
	printf("%d",length);
	return 0;
}


