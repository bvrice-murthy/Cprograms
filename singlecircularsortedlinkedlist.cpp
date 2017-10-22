// singlecircularsortedlinkedlist.cpp : Defines the entry point for the console application.
//

#include "stdio.h"
#include"malloc.h"
struct node
{
	int num;
	struct node *next;
};
typedef struct node nodeptr;
nodeptr *createlist(nodeptr *head,int element)
{
	nodeptr *newNode,*tail,*before;

		newNode=(nodeptr *)malloc(1*sizeof(nodeptr));
		newNode->num=element;
		
		if(head==NULL)
		{
			head=newNode;
			newNode->next=head;
		}
			
		else
		{
			tail=head;
			
			if(element<=tail->num)
			{
				newNode->next=tail;
				while(tail->next!=head)
					tail=tail->next;
				head=newNode;
				tail->next=newNode;
			}
			else{
				while(element>=tail->num&&tail->next!=head)
				{
					before=tail;
					tail=tail->next;
				}
				if(tail->next==head&&element>tail->num)
				{
					
					tail->next=newNode;
					newNode->next=head;
				}
				else
				{

				before->next=newNode;
				newNode->next=tail;
				}
			}
		}
	

return head;
}
struct node *append(struct node *head)
{
	struct node *temp,*node1;int element,lenght=0;
	printf("Enter elemnt to be added");
	temp=head;
	//printf("temp=%d",temp->num);
	scanf("%d",&element);
	//printf("%d",head->num);
	node1=(nodeptr *)malloc(1*sizeof(nodeptr));
	
	//printf("head=%d",head->num);
	while(head->next!=temp)
	{
		head=head->next;
		lenght++;
	}
	node1->num=element;
	node1->next=temp;
	temp=node1;
	head->next=node1;
	printf("After appending the node");
	
	return temp;
}


	
void showlist(nodeptr *head)
{
	nodeptr *temp;
	temp=head;
	printf("%d->",head->num);
	while(head->next!=temp)
	{
		head=head->next;
		printf("%d->",head->num);
		
	}
}

int main()
{	
	int i,range,*array1;
	nodeptr *head=NULL,*head1=NULL;
	printf("Enter the range of the array");
	scanf("%d",&range);
	array1=(int *)malloc(range*sizeof(int));
	printf("Enter the elements into the array");
	for(i=0;i<range;i++)
	{
		scanf("%d",&array1[i]);
	}
	//printf("%d",head->num);
	//printf("%d",head->next->num);
	for(i=0;i<range;i++)
	{
			head=createlist(head,array1[i]);
	}
	//head1=append(head);
	showlist(head);
	return 0;
}

