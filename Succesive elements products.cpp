//a c program to find the product of succive elemnt in an array
 #include<stdio.h>
int main()
{
int *buff,*opbf,prod,i,j,n;
printf("Enter range");
scanf("%d",&n);
buff=(int *)malloc(n*sizeof(int));
printf("enter elements into array");
for(i=0;i<n;i++)
scanf("%d",(buff+i));
for(i=0;i<n;i++)
{
	prod=1;
	for(j=0;j<n;j++)
	{
		if(i!=j)//finding the product successive elements
		{
			prod=prod*buff[j];
		}
	}
	opbf[i]=prod;
	printf("%d\n",opbf[i]);
}
return 0;
}


