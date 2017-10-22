#include<stdio.h>
#include<malloc.h>
void compliment(int *n)
{
	char *s;
	int i=0,cnt=0,t;
	*n=~*n;
	*n+=1;
	t=*n;
	while(*n)
	{
		cnt++;
		*n/=2;
	}
	s=(char *)malloc(cnt*sizeof(char)+1);
	s[i]=0+'0';i++;

	while(t)
	{
		s[i]=(t%2+'0');
		t/=2;
		i++;
	}
	s[i]='\0';
	printf("the twos compliment number string is");
	printf("%c",s[t]);
	
	while(i>0)
	{
		printf("%c",s[i]);
		i--;
	}
}
int main()
{
	int n;
	printf("Enter a negative number");
	scanf("%d",&n);
	compliment(&n);
	return 0;
}