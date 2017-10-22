#include<stdio.h>
#include<malloc.h>
struct persondetails
{
	char *name;
	int age;
};
typedef struct persondetails pd;
void sortpersonslistbyage(pd *personlist,int range)
{
	char *temp;int temp1,i,j;
	for(i=0;i<range;i++)
	{
		for(j=i+1;j<range;j++)
		{
			if(personlist[i].age>personlist[j].age)
			{
				temp=personlist[i].name;
				personlist[i].name=personlist[j].name;
				personlist[j].name=temp;
				temp1=personlist[i].age;
				personlist[i].age=personlist[j].age;
				personlist[j].age=temp1;
			}
		}
	}
	
}
void reversepersonslist(pd *personlist,int range)
{
	int i=0,j=range-1,temp1;char *temp;
	while(i<=range/2)
	{
		temp=personlist[i].name;
		personlist[i].name=personlist[j].name;
		personlist[j].name=temp;
		temp1=personlist[i].age;
		personlist[i].age=personlist[j].age;
		personlist[j].age=temp1;
		i++;
		j--;
	}
}
void display(pd *personlist,int range)
{
	int i=0;
	printf("The pesron details are\n");
	printf("\n NAME\t\t\tAGE\n");
	for(i=0;i<range;i++)
	{
		printf("\n%s\t\t\t%d\n",personlist[i].name,personlist[i].age);
	}
}


int main()
{
pd *personlist;int range,length,i=0;
printf("Enter the range of the struct array");
scanf("%d",&range);
personlist=(pd *)malloc(range*sizeof(personlist));
for(i=0;i<range;i++)
{
	printf("\nEnter the range of %dth string",i+1);
	scanf("%d",&length);
	personlist[i].name=(char *)malloc((length+1)*sizeof(char));
	printf("enter the name of the person");
	gets(personlist[i].name);
	gets(personlist[i].name);
	printf("\nEnter the age of the %dth person\n",i+1);
	scanf("%d",&personlist[i].age);
}
/*for(i=0;i<range;i++)
{
	printf("\nThe %dth person name is\n",i+1);
	puts(personlist[i].name);
	printf("\nThe %dth person age is \n",i+1);
	printf("%d",personlist[i].age);
}*/
sortpersonslistbyage(personlist,range);
display(personlist,range);
reversepersonslist(personlist,range);
printf("After reversing the array the list is\n");
display(personlist,range);
return 0;
}

