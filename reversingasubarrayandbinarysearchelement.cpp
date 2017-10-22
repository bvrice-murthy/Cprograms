#include<stdio.h>
#include<malloc.h>

void reversesubarray(int *array,int length,int starting,int ending)
{
	int i=starting,temp,l=ending;

	if((starting>=0&&starting<=ending)&&(ending>=0&&ending<=length-1))
	{
	
			while(i<l-1)
			{
				temp=array[i];
				array[i]=array[ending];
				array[ending]=temp;
				i++;
				ending--;
			}
		
			
		
		i=0;
		printf("after reversing the sub array the array elements are");
		while(i<length)
		{
			printf("%d\n",array[i]);
			i++;
		}
		
	}

	else
	{
		printf("\nEnter proper index the starting position should be greater than 0 and ending position should be less than %d\n",length-1);
	}
}
void binarysearch(int *array,int low,int high,int element)
{
	
	int mid;
	if((low>=0&&high>=0)&&low<=high)
	{
		mid=(low+high)/2;
		if(element<array[mid])
		{
			high=mid-1;
			binarysearch(array,low,high,element);
		}
		else if(element>array[mid])
		{
			low=mid+1;
			binarysearch(array,low,high,element);
		}
		else 
		{
			printf("element found at %d position ",mid+1);
		}
	}
	else
	{
		printf("element not found");
	}


	
}
int main()
{
	int *array,range,i=0,starting,ending,low=0,element;
	printf("Enter the range of an array");
	scanf("%d",&range);
	printf("Enter %d number of elements into the array ",range);
	array=(int *)malloc(range*sizeof(int));
	for(i=0;i<range;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("Enter element to be found");
	scanf("%d",&element);
	binarysearch(array,low,range,element);
	printf("\n Enter starting position");
	scanf("%d",&starting);
	printf("\n Enter Ending position");
	scanf("%d",&ending);
	reversesubarray(array,range,starting,ending);
return 0;
}
