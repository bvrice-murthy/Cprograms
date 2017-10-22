#include<stdio.h>
#include<malloc.h>

void rightshift(int *array,int range,int n)
{
	int i=0,j=range-1;
	while(i<range/2)
	{
		array[i]^=array[j];
		array[j]^=array[i];
		array[i]^=array[j];
		i++;
		j--;
	}
	i=0;j=n-1;
	while(i<n/2)
	{
		array[i]^=array[j];
		array[j]^=array[i];
		array[i]^=array[j];
		i++;
		j--;
	}
	i=n;
	j=range-1;
	while(i<=(range-i))
	{
		array[i]^=array[j];
		array[j]^=array[i];
		array[i]^=array[j];
		i++;
		j--;
	}

	i=0;
	while(i<range)
	{
		printf("%d",array[i++]);
	}

}
int main()
{
	int *array,range,n,i=0;
	printf("Enter range of an array");
	scanf("%d",&range);
	array=(int *)malloc(range*sizeof(int));
	for(i=0;i<range;i++)
		scanf("%d",&array[i]);
	printf("Enter number of elements to be shifted");
	scanf("%d",&n);
	rightshift(array,range,n);
	return 0;
}



