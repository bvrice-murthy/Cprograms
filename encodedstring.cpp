//to encode the given string as a=1,b=2---z=26
#include<stdio.h>
#include<malloc.h>
void encodestring(char *a,int *b);
int main()
{
	char *a;int *b,i=0,n;
	printf("Enter the range of the string");
	scanf("%d",&n);
	printf("Enter %dlengthe string",n);
	a=(char *)malloc(n*sizeof(char));
	gets(a);gets(a);
	b=(int *)malloc(26*sizeof(int));
	b[i]='a';
	for(i=1;i<26;i++)
	{
		b[i]=b[i-1]+1;
	}
	encodestring(a,b);
	
	return 0;
}
void encodestring(char *a,int *b)
{
	int i=0,j,m,b1;char *s;
	while(a[i]!='\0')
	{
		i++;
	}
	s=(char *)malloc((2*i)*sizeof(char)+1);
	i=0;m=0;
	while(a[i]!='\0')
	{
		
		for(j=1;j<=26;j++)
		{
			if(a[i]==b[j])
			{
				s[m++]=(j/10)+'0';
				s[m++]=(j%10)+'0';
			}
		}
		i++;
	}
	s[m]='\0';
	printf("The encoded string is");
	puts(s);
	printf("Enter index number");
	scanf("%d",&b1);
	s[2*b1-3]='\b';
	printf("%s",s);
}
