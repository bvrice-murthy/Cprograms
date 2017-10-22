// sub_sring.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"malloc.h"
void sub_string(char *s,int n,int m,int k)
{
	int i=0,j=0;char *s1;
	
	if(m<n&&k<n)
	{
	
		s1=(char *)malloc((k-m)+1*sizeof(char));
		i=m;
		while(i<=k)
		{
			s1[j]=s[i];
			j++;
			i++;
		}s1[j]='\0';
	}
	else
		printf("the range is out of limit");
	printf("the substring is\n");
	puts(s1);
}



int _tmain(int argc, _TCHAR* argv[])
{
	char *s;int n,m,k;
	printf("enter the range of the string");
	scanf("%d",&n);
	s=(char *)malloc(n*sizeof(char));
	gets(s);
	gets(s);
	printf("enter the range of substrings");
	scanf("%d%d",&m,&k);
	sub_string(s,n,m,k);
	return 0;



	
}

