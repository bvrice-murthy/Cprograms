// removeduplicatesinstring.cpp : Defines the entry point for the console application.
//

#include "stdio.h"
#include "malloc.h"
void removeconsecutiveduplicates(char *s)
{
	int i=0,j=0,k=0;
	while(s[i]!='\0')
	{
		while(s[i]==s[j])
		{j++;
		}
		s[++k]=s[j++];
		i=j;
	}
	s[k+1]='\0';
	printf("after removing consecutive duplicates\n");
	puts(s);

}

int main()
{
	char *s;
	int n;
	printf("Enter the range of the string");
	scanf("%d",&n);
	s=(char *)malloc((n+1)*sizeof(char));
	gets(s);
	gets(s);
removeconsecutiveduplicates(s);
return 0;
}

