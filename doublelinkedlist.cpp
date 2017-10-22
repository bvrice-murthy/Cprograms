// doublelinkedlist.cpp : Defines the entry point for the console application.
//

#include "stdio.h"
#include"malloc.h"
struct node
{
	int data;
	struct node *prev,*next;
};
typedef struct node nodeptr;
nodeptr *insertlist(nodeptr *head,int x)
{
	nodeptr *temp;
	while(x)
	{
		temp=(nodeptr *)malloc(1*sizeof(nodeptr));
		temp->data=x%10;
		
		if(head==NULL)
		{
			
			temp->prev=NULL;
			temp->next=NULL;
		}
		else
		{
			
			temp->prev=head;
			temp->next=head;
		}
		
		head=temp;
		x=x/10;
	}
	return head;
}




int main()
{
	int x;
	nodeptr *head=NULL;
	printf("Enter the element number");
	scanf("%d",&x);
	head=insertlist(head,x);
	while(head!=NULL)
	{
		printf("%d->",head->data);
		head=head->next;
	}

    return 0;
}

