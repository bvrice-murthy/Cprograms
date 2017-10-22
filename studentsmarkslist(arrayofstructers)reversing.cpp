#include<stdio.h>
#include<malloc.h>
struct student
{
	char *name;
	int sub1,sub2,sub3,sub4,sub5,sub6;
};
typedef struct student studentmarks;
void swap(studentmarks *sd,int i,int j)
{
	char *dupname;int temp;
	dupname=sd[i].name;
	sd[i].name=sd[j].name;
	sd[j].name=dupname;
	temp=sd[j].sub1;
	sd[j].sub1=sd[i].sub1;
	sd[i].sub1=temp;
	temp=sd[i].sub2;
	sd[i].sub2=sd[j].sub2;
	sd[j].sub2=temp;
	temp=sd[i].sub3;
	sd[i].sub3=sd[j].sub3;
	sd[j].sub3=temp;
	temp=sd[j].sub4;
	sd[j].sub4=sd[i].sub4;
	sd[i].sub4=temp;
	temp=sd[j].sub5;
	sd[j].sub5=sd[i].sub5;
	sd[i].sub5=temp;
	temp=sd[j].sub6;
	sd[j].sub6=sd[i].sub6;
	sd[i].sub6=temp;
}
void reversestudentmarks(studentmarks *sd,int range)
{
	int i=0,j=range-1;
	while(i<=range/2)
	{
	
		swap(sd,i,j);
		i++;
		j--;
	}
	i=0;
	printf("\nstudentname\tsub1\tsub2\tsub3\tsub4\tsub5\tsub6\n");
	while(i<range)
	{
		
		printf("%s\t\t%d\t%d\t%d\t%d\t%d\t%d\n",sd[i].name,sd[i].sub1,sd[i].sub2,sd[i].sub3,sd[i].sub4,sd[i].sub5,sd[i].sub6);
		i++;
	}
}
int main()
{
	int i,range,lenght;studentmarks *sd;
	printf("Enter range of the structure array\n");
	scanf("%d",&range);
	printf("Enter studebt details");
	sd=(studentmarks *)malloc(range*sizeof(studentmarks));
	for(i=0;i<range;i++)
	{
		printf("Enter the size of %dth student name",i+1);
		scanf("%d",&lenght);
		sd[i].name=(char *)malloc(lenght+1*sizeof(char));
		gets(sd[i].name);
		gets(sd[i].name);
		printf("Enter the six subjects marks");
		scanf("%d%d%d%d%d%d",&sd[i].sub1,&sd[i].sub2,&sd[i].sub3,&sd[i].sub4,&sd[i].sub5,&sd[i].sub6);
	}

	reversestudentmarks(sd,range);
	return 0;
}
	

