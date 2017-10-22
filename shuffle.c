#include<stdio.h>
#include<malloc.h>

int main()
{
	int *a,*b,n,i,p1,p2;
	scanf("%d",&n);
	a=(int *)malloc(n*sizeof(int));
	b=(int *)malloc(n*sizeof(int));

	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
    
	b[0]=a[0];
	b[n-1]=a[n-1];
	p1=n/2;
	p2=1;
	i=1;
	while(i<n-1)
	{
		b[i]=a[p1];
		p1++;
		i++;
		b[i]=a[p2];
		i++;
		p2++;
	}
	for(i=0;i<n;i++)
		printf("%d ",b[i]);
	return 0;
}
	



		

