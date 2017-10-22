// leftshift12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "malloc.h"
void leftshift(char *s,int n)
{
	int i=0,j=0;char *s1;
	while(s[i]!='\0')
	{
		i++;
	}
	s1=(char *)malloc((i+1)*sizeof(char));
	if(n>=0&&n<i)
	{
		i=0;

	while(i<=n)
	{
		i++;
	}
	while(s[i]!='\0')
	{
		s1[j]=s[i];
		j++;i++;
	}i=0;
	while(i<=n)
	{
		s1[j]=s[i];
		j++;
		i++;
	}
s1[j]='\0';
printf("The left shifted string is");
puts(s1);
	}
	else
	{ 
		printf("please enter a valid range");
	}
}
int _tmain(int argc, _TCHAR* argv[])
{
char *s;
int i=0,n,pos;
printf("Enter the range of the array");
scanf("%d",&n);
s=(char *)malloc(n*sizeof(char));
printf("enter the string");
gets(s);
gets(s);
printf("Enter the position ");
scanf("%d",&pos);
leftshift(s,pos);
return 0;
}

