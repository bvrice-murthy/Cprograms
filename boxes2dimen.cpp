/*two dimensional array representation*/
#include<stdio.h>
#include<malloc.h> 

int main()
{
	int **a,i,j=0,k=0,g=0;
	char **oparray;
	a=(int **)malloc(2*sizeof(int));
	a[0]=(int *)malloc(sizeof(int)*(2*2+1));
	a[1]=(int *)malloc(sizeof(int)*(2*2+1));
	printf("Enter elements into the array");
	for(i=0;i<2;i++)
	{
		
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
		oparray=(char **)malloc(sizeof(char )*5);
		for(i=0;i<5;i++)
		{
			oparray[i]=(char *)malloc(sizeof(char *)*(2*4+1));
		}
		
		
		for(j=0;j<(2*4+1);j++)
		{
			oparray[0][j]='.';
			oparray[2][j]='.';
			oparray[4][j]='.';
		}
		oparray[0][j]='\0';
		oparray[2][j]='\0';
		oparray[4][j]='\0';


	for(j=0;j<2;j++)
	{
		oparray[1][k++]='|';
		oparray[1][k++]=' ';
		oparray[1][k++]=a[0][j]+'0';
		oparray[1][k++]=' ';
	}
	oparray[1][k]='\0';
for(j=0;j<2;j++)
{
	oparray[3][g++]='|';
	oparray[3][g++]=' ';
	oparray[3][g++]=a[1][j]+'0';
	oparray[3][g++]=' ';
}
oparray[3][g++]='\0';
for(i=0;i<5;i++)
{
	printf("\n%s",oparray[i]);
}



		



return 0;
}