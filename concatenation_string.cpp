// concatenation_string.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "malloc.h"
void concatenate_string(char *s1,char *s2)
{
	int i=0,j=0;char *s3;
	while(s1[i]!='\0')
	{
		i++;
	}i--;
	while(s2[j]!='\0')
	{
		j++;
	}j--;
	s3=(char *)malloc((i+j)+1*sizeof(char));
	i=0;j=0;
	while(s1[i]!='\0')
	{
		s3[i]=s1[i];
		i++;
	}
	while(s2[j]!='\0')
	{
		s3[i+j]=s2[j];
		j++;
	}
	s3[i+j]='\0';
	printf("the concatenated string is\n");
	puts(s3);
}

int _tmain(int argc, _TCHAR* argv[])
{
char *s1,*s2;int m,n;
	printf("enter the range of two strings");
	scanf("%d%d",&m,&n);
	s1=(char *)malloc(n*sizeof(char));
	s2=(char *)malloc(m*sizeof(char));
	gets(s1);
	gets(s1);
	gets(s2);
concatenate_string(s1,s2);


	return 0;
}

