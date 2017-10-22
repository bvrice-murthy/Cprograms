#include<stdio.h>
#include<malloc.h>
void lowertoupper(char *string);
int main()
{
	char *string;
	int n;
	printf("Enter the range ");
	scanf("%d",&n);
	string=(char *)malloc(n*sizeof(char)+1);
	gets(string);
	gets(string);
	lowertoupper(string);
	return 0;
}
void lowertoupper(char *string)
{
	int i=0;
	while(string[i]!='\0')
	{
		if(string[i]>='a'&&string[i]<='z')
		{
			string[i]=(string[i]-'a')+'A';
			i++;
		}
		if(string[i]>='A'&&string[i]<='Z')
		{
			string[i]=(string[i]-'A')+'a';
			i++;
		}
		else if(!(string[i]>='a'&&string[i]<='z')&&!(string[i]>='A'&&string[i]<='Z'))

			i++;
		
	}

	puts(string);
}
