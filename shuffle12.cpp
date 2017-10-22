#include<stdio.h>
#include<malloc.h>
int main()
{
	int *p,*q,i,j,k=1,n;
	printf("Enter the range of array");
	scanf("%d",&n);
	p=(int *)malloc(n*sizeof(int));
	q=(int *)malloc(n*sizeof(int));
	printf("Enter the elements into the array");
	for(i=0;i<n;i++)
		scanf("%d",(p+i));
	j=n/2;
	i=0;
	q[i]=p[i];
	i++;
	while(i<n)
	{
		q[i]=p[j];
		i++;
		j++;
		q[i]=p[k];
		i++;k++;
	}
	printf("The shuffled array is \n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",q[i]);
	}
	return 0;
}


