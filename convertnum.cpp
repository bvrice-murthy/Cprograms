// print_Num.cpp : Defines the entry point for the console application.
//

#include "stdio.h"

#include<malloc.h>
void caluculate(int *n)
{
	int t,i=0;
	t=*n;
	*n=0;
	while(t)
	{
		*n=*n<<(i*8);
		*n=*n+(t%10)+'0';
		t/=10;
		i++;				
	}


}
int main()
{
	int n,i=4;
	printf("enter the number(max 4digits) : ");
	scanf("%d",&n);
	calculate(&n);
	
	while(i)
	{
		printf("%c",255&(n>>(i*8)));
		i--;
	}
	return 0;
}

