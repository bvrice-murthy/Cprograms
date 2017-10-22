// A program to convert binary string to integer
#include<stdio.h>
#include<malloc.h>
int main()
{
	char *str;
	int n,sum=0,i=0;
	printf("Enter range");
	scanf("%d",&n);
	printf("Enter %d number of binary digits",n);
	str=(char *)malloc(n*sizeof(char));
	scanf("%s",str);
	i=0;
	while(str[i]!='\0')
	{
		sum=sum<<1;//left shift sum by 1
		if(str[i]=='1')
			sum+=1;//add 1 to sum
		i++;
	}
	printf("The integer value is %d",sum);
return 0;
}