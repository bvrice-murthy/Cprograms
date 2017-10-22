// C program to swap 0's and 1's hence All zeros in left hand side and all One's in right hand side of the given string 
#include<stdio.h>
#include<malloc.h>
int main()
{
int *buff,i,n,j;
printf("Enter range");
scanf("%d",&n);
buff=(int *)malloc(sizeof(int)*n);
for(i=0;i<n;i++)
scanf("%d",(buff+i));
i=0;j=n-1;
while(i<j)          // process until i and j crossed each other 
{
 while(buff[i]==0) // Looking for 1 from left side
  i++;
 while(buff[j]==1) // Looking for 0 from right side
  j--;

 if(i<j)
 {
  buff[i]=0,buff[j]=1;
  i++;
  j--;
 }
}
for(i=0;i<n;i++)
printf("%d",buff[i]);
return 0;
}



