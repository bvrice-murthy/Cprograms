#include<stdio.h>
#include<malloc.h>
void expandstringrepeatingeachcharacter(char *string,int nooftimes)
{
	int i=0,j,k=0;char *string1;
	while(string[i]!='\0')
	{
		i++;
	}
	string1=(char *)malloc((i*nooftimes)+1*sizeof(char));
	i=0;
	while(string[i]!='\0')
	{
		for(j=0;j<nooftimes;j++)
		{
			string1[k]=string[i];
			k++;
		}
		i++;
	}
	string1[k]='\0';
	printf("After repeating each character in string\n");
	puts(string1);
}
int main()
{
int range,n;char *string;
printf("Enter the range of the string");
scanf("%d",&range);
string=(char *)malloc(range+1*sizeof(char));
printf("Enter the string");
gets(string);
gets(string);
printf("Enter no of times you want");
scanf("%d",&n);
expandstringrepeatingeachcharacter(string,n);
return 0;
}

