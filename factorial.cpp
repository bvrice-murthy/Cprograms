#include<stdio.h>
#include<malloc.h>
int factorial(int num)
{
	if(num==0)
	{
		return 1;
	}
	else
	return	num*factorial(num-1);
}
int main()
{
	int num,fact;
	printf("Enter the number");
	scanf("%d",&num);
	fact=factorial(num);
	printf("The factorial of given numbeer is %d\n",fact);
	return 0;
}

