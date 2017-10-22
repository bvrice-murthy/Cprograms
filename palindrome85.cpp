#include<stdio.h>
#include<malloc.h>
void palindrome(char *s);
void main()
{
	char *s;
	int n;
	printf("Enter range of an array");
	scanf("%d",&n);
	s=(char *)malloc(n+1*sizeof(char));
	printf("Enter the string");
	gets(s);
	gets(s);
    palindrome(s);
	return;
}
void palindrome(char *s)
{
	int i=0,j=0;
	while(*(s+i))
		i++;
	i--;
	while(*(s+j))
	{
		if(s[j]!=s[i])
			break;
		i--;
		j++;
	}
	if(j<i)
		printf("The String is not palindrome");
	else
		printf("The string is palindrome\t%s",s);
	return;
}

	

