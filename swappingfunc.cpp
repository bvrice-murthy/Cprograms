#include<stdio.h>
#include<malloc.h>
void swap1(int a,int b)
{
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After swapping the integers are %d\t%d\n",a,b);
}
void swap2(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("After swapping the intgers are %d\t%d\n",a,b);
}
void swap3(int *a,int *b)
{
	*a=*a+*b;
	*b=*a-*b;
	*a=*a-*b;
	printf("After swapping the integers are %d\t%d\n",*a,*b);
	
}
/*void swap4(int *a,int *b)
{
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After swapping the integers are %d\t%d\n",a,b);
}*/

int main()
{
	int a,b,*c,*d;
	printf("Enter a,bvalues");
	scanf("%d",&a);
	scanf("%d",&b);
	swap1(a,b);
	swap2(a,b);
	swap3(&a,&b);
	/*printf("Enter c,d values");
	scanf("%d",&c);
	scanf("%d",&d);
	swap4(c,d);*/
	return 0;
}