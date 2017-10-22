#include<stdio.h>
#include<malloc.h>
void repeatentirestring(char *string,int m);
int main()
{
	char *array; int n,m;
	printf("enter the range of the string");
	scanf("%d",&n);
	array=(char *)malloc(n*sizeof(char)+1);
	gets(array);
	gets(array);
	printf("entre how many times the strig should be repeate");
	scanf("%d",&m);
	repeatentirestring(array,m);
	return 0;
}
void repeatentirestring(char *array,int m)
{
	char *string;int i=0,j=0,k=0;
	while(array[i]!='\0')
	{
		i++;
	}
	i--;
	string=(char *)malloc(m*i*sizeof(char)+1);
	for(i=0;i<m;i++)
	{
		j=0;
		while(array[j]!='\0')
		{
			string[k]=array[j];
			j++;k++;
		}
	}string[k]='\0';
	i=0;
	while(string[i]!='\0')
	{
		printf("%c",string[i]);
		i++;
	}
}

