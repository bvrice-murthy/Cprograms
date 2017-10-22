// digittonumber.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"malloc.h"
void digittonumber(char *s)
{
	int i=0,r=0,s1=0;
	while(s[i]!='\0')
	{
		r=s[i]-'0';
		s1=s1*10+r;
		i++;
	}
	printf("the digit in the string is %d",s1);
}

int _tmain(int argc, _TCHAR* argv[])
{
	char *str;int n;
	printf("Enter the range of string upto 9 digits");
	scanf("%d",&n);
	str=(char *)malloc((n+1)*sizeof(char));
	printf("enter the numbered string");
	gets(str);
	gets(str);
digittonumber(str);

	return 0;
}

