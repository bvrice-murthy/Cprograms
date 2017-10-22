// deleteinbetweenelements.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"malloc.h"
void deletebetween(char *s,int m,int n)
{
	int i=0,k=0;
	while(s[i]!='\0')
	{
		while(k<m)
		{
			s[k]=s[i];
			k++;
			i++;
		}
		while(i<=n)
		{i++;
		}
		s[k]=s[i];
		k++;i++;
	}
	s[k]='\0';
	printf("After deleting in between string");
	puts(s);
}



int _tmain(int argc, _TCHAR* argv[])
{
	char *s;int m,n,range;
	printf("Enter range of the string");
	scanf("%d",&range);
	printf("enter string");
	s=(char *)malloc((range+1)*sizeof(char));
	gets(s);
	gets(s);
	printf("enter range of start ending positons");
	scanf("%d%d",&m,&n);
	deletebetween(s,m,n);
	return 0;
}

