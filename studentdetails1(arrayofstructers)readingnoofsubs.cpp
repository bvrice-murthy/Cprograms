//this program reads the number of subjects as input
#include<stdio.h>
#include<malloc.h>
struct student
{
	char *name;
	int *marks;
};
typedef struct student studentdetails;
void swap(studentdetails *studentmarks,int i,int j)
{

	int *temp;char *dup;
	dup=studentmarks[i].name;
	studentmarks[i].name=studentmarks[j].name;
	studentmarks[j].name=dup;
	temp=studentmarks[i].marks;
	studentmarks[i].marks=studentmarks[j].marks;
	studentmarks[j].marks=temp;
}
void reverse(studentdetails *studentmarks,int range,int nos)
{
	int i=0,j=range-1;
	while(i<range/2)
	{
		swap(studentmarks,i,j);
		i++;
		j--;
	}
	printf("After reversing\n");
	for(i=0;i<range;i++)
	{
		printf("%s\t",studentmarks[i].name);
		for(j=0;j<nos;j++)
		{
			printf("%d\t",studentmarks[i].marks[j]);
		}
		printf("\n");
	}
}
	
int main()
{
	studentdetails *studentmarks;
	int i,j,range,length,nos;
	printf("Enter the range of the structure array");
	scanf("%d",&range);
	studentmarks=(studentdetails *)malloc(range*sizeof(studentdetails));
	printf("Enter number of subjects");
	scanf("%d",&nos);
	for(i=0;i<range;i++)
	{
		printf("Enter the size of %dth student name\n",i+1);
		scanf("%d",&length);
		studentmarks[i].name=(char *)malloc((length+1)*sizeof(char));
		printf("Enter the %dth student name\n",i+1);
		gets(studentmarks[i].name);
		gets(studentmarks[i].name);
		studentmarks[i].marks=(int *)malloc(nos*sizeof(int));
		printf("Enter marks of %d subjects\n",nos);
		for(j=0;j<nos;j++)
		{
			scanf("%d",&studentmarks[i].marks[j]);
		}
	}
	for(i=0;i<range;i++)
	{
		printf("%s\t",studentmarks[i].name);
		for(j=0;j<nos;j++)
		{
			printf("%d\t",studentmarks[i].marks[j]);
		}
		printf("\n");
	}
	reverse(studentmarks,range,nos);
	return 0;
}

