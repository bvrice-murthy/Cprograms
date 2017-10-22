#include<stdio.h>
#include<malloc.h>

void reversestring(char *string,int start,int ending)
{
	int l=ending,i=start;char ch;

	while(i<=(start+l)/2)
	{
		ch=string[i];
		string[i]=string[ending];
		string[ending]=ch;
		i++;
		ending--;
	}
	/*i=0;
	while(string[i]!='\0')
	{
		printf("%c",string[i++]);
	}*/
}
void reversesentence(char *string,int start,int ending)
{
	reversestring(string,start,ending-1);
	int i=0,j=0;
	while(string[i]!='\0')
	{
		j=i;
		
		while(string[i]!=' '&&string[i]!='\0')
		{
			i++;
		}
		reversestring(string,j,i-1);
		i++;
	}
	i=0;
	while(string[i]!='\0')
	{
		printf("%c",string[i++]);
	}
}
int main()
{
	char *string;int range;
	printf("Enter the range of the string");
	scanf("%d",&range);
	string=(char *)malloc((range+1)*sizeof(char));
	printf("Enter %d length string",range);
	gets(string);
	gets(string);
	reversesentence(string,0,range);
	return 0;
}
