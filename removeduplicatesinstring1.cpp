#include<stdio.h>
#include<malloc.h>
void removeduplicates(char *string)
{
	int countarray[52],i,k=0;
	for(i=0;i<52;i++)
	{
		countarray[i]=0;
	}
	i=0,k=0;
	while(string[i]!='\0')
	{
		if(string[i]>='A'&&string[i]<='Z')
		{
			if(countarray[string[i]-'A'+26]==1)
			i++;
			else
			{
				string[k]=string[i];
				countarray[string[i]-'A'+26]++;
				k++;i++;
			}
		}
		else
		{
			if(countarray[string[i]-'a']==1)
				i++;
			else
			{
				string[k]=string[i];
				countarray[string[i]-'a']++;
				k++;
				i++;
			}
		}
	}
	string[k]='\0';
	puts(string);	
}
int main()
{
	char *string;int range;
	printf("Enter range of the string\n");
	scanf("%d",&range);
	string=(char *)malloc((range+1)*sizeof(char));
	printf("Enter %d length string\n",range); 
	gets(string);
	gets(string);
	printf("\nAfter removing duplicates in the string\n ");
	removeduplicates(string);
	return 0;
}


