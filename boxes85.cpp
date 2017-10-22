/*single dimensional array representation*/
#include<stdio.h>
#include<malloc.h> 

int main()
{
	int *a,n,i,j=0,k=0;
	char **oparray;
	printf("Enter range of array");
	scanf("%d",&n);
	a=(int *)malloc(n*sizeof(int));
	printf("Enter elements into the array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
		oparray=(char **)malloc(sizeof(char )*3);
		for(i=0;i<3;i++)
		{
			oparray[i]=(char *)malloc(sizeof(char *)*(n*4+1));
		}
		
		
		for(j=0;j<(n*4+1);j++)
		{
			oparray[0][j]='.';
			oparray[2][j]='.';
		}
		oparray[0][j]='\0';
		oparray[2][j]='\0';


	for(j=0;j<n;j++)
	{
		oparray[1][k++]='|';
		oparray[1][k++]=' ';
		oparray[1][k++]=a[j]+'0';
		oparray[1][k++]=' ';
	}
	oparray[1][k]='\0';

for(i=0;i<3;i++)
{
	printf("\n%s",oparray[i]);
}



		



return 0;
}