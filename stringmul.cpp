#include<stdio.h>
#include<malloc.h>
int computemul(char *a,char *b);
int main()
{
	int m,n,mul;
	char *s,*s1;
	printf("Enter the range of string 1");
	scanf("%d",&m);
	s=(char *)malloc(m*sizeof(char)+1);
	printf("Enter the range of dtring 2");
	scanf("%d",&n);
	s1=(char *)malloc(n*sizeof(char)+1);
	printf("Enter string in 1's,0's");
	gets(s);
	gets(s);
	printf("Enter string2 in 1's,0's");
	gets(s1);
	mul=computemul(s,s1);
	printf("The multiplication of string bits is%d\n",mul);
	return 0;
}

int computemul(char *s,char *s1)
{
	int i=0,sum=0,sum1=0;
	while(s[i]!='\0')
	{
		sum=sum<<1;
		if(s[i]=='1')
			sum+=1;
		i++;
	}
	i=0;
	while(s1[i]!='\0')
	{
		sum1=sum1<<1;
		if(s1[i]=='1')
			sum1+=1;
		i++;
	}
	return sum*sum1;
}

