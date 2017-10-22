// rightshift.cpp : Defines the entry point for the console application.
//

#include "stdio.h"
#include "malloc.h"
void rightshift(char *s,int n)
{
	int i=0,j=0;char *str;
	while(s[i]!='\0')
		i++;
	i--;
str=(char *)malloc((i+1)*sizeof(char));
i=n;j=0;
while(s[i]!='\0')
{
	str[j]=s[i];
	j++;
	i++;
}
i=0;
while(i<n)
{
	str[j]=s[i];
	j++;
	i++;
}
str[j]='\0';
puts(str);
}





int main()
{
	char *s;int n,pos,i=0;
	printf("Enter range of string");
	scanf("%d",&n);
	s=(char *)malloc((n+1)*sizeof(char));
	gets(s);
	gets(s);
	printf("Enter the position from which the string is to be shifted");
	scanf("%d",&pos);
	rightshift(s,pos);
	return 0;
}

