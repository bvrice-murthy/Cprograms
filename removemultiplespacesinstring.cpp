#include<stdio.h>
#include<malloc.h>
void removemultiplespaces(char *string)
{
	int i=0,j=0;
	while(string[i]!='\0')
	{
		if(string[i]==' ')
		{
			string[j]=string[i];
			i++;j++;
			while(string[i]==' ')
				i++;
		}
		string[j]=string[i];
		j++;
		i++;
		
	}
	string[j]='\0';
	puts(string);
}
int main()
{
	char *string;int range;
	printf("Enter the range of string");
	scanf("%d",&range);
	string=(char *)malloc((range+1)*sizeof(char));
	printf("Enter %d length string",range);
	gets(string);
	gets(string);
	printf("After removing duplicates in string\n");
	removemultiplespaces(string);
	return 0;
}