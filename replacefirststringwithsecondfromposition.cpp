#include<stdio.h>
#include<malloc.h>
void replacefirststringfromposition(char *string1,char *string2,int position)
{
	int i=0,j=0;
	if(position>=0)
	{
		while(i<position)
		{
			i++;
		}
		while(string2[j]!='\0')
		{
			string1[i]=string2[j];
			i++;j++;
		}
		string1[i]='\0';
		puts(string1);
	}
	else
	{
		printf("position should be greater than 0");
	}

}

int main()
{
	char *string1,*string2;
	int range1,range2,position;
	printf("Enter the range of two strings");
	scanf("%d",&range1);
	scanf("%d",&range2);
	string1=(char *)malloc((range1+range2+1)*sizeof(char));
	string2=(char *)malloc((range2+1)*sizeof(char));
	printf("Enter %d length string1",range1);
	gets(string1);
	gets(string1);
	printf("Enter %d length string2",range2);
	gets(string2);
	printf("Enter the position");
	scanf("%d",&position);
	printf("After replacing second string\n");
	replacefirststringfromposition(string1,string2,position);
	return 0;
}