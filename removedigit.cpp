#include<stdio.h>
#include<malloc.h>
void removedigit(char *a);
int main()
{
	char *s;int n;
	printf("Enter the range of the string");
	scanf("%d",&n);
	s=(char *)malloc((n+1)*sizeof(char));
	printf("Enter the string");
	gets(s);
	gets(s);
	removedigit(s);
	return 0;
}
void removedigit(char *s)
{
	char *s1;int i=0,j=0;
	while(s[i]!='\0')
	{
		i++;
	}i--;
	s1=(char *)malloc((i+1)*sizeof(int));
	i=0;
	while(s[i]!='\0')
	{
		while(s[i]>='0'&&s[i]<='9')
		{
			i++;
		}
		s1[j]=s[i];
		j++;
		i++;
	}
	s1[j]='\0';
	puts(s1);
}