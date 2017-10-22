// linkedlistnthelement.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include"malloc.h"
struct node
{
	int data;
	struct node *next;
};
typedef struct node nodeptr;
nodeptr *insert(nodeptr *head,int x)
{
	nodeptr *temp;
	while(x)
	{
		temp=(nodeptr *)malloc(1*sizeof(nodeptr));
		temp->data=x%10;
		temp->next=head;
		head=temp;
		x=x/10;
	}
return head;
}
nodeptr *nthelement(nodeptr *head,int n)
{
	nodeptr *temp=head;int i=0;
	temp=(nodeptr *)malloc(10*sizeof(nodeptr));
	while(i<n)
	{
		temp=temp->next;
	}
	while(temp!=NULL)
	{
		head=head->next;
		temp=temp->next;
	}
	printf("The %dth element from last is %d",x,head->data);
	return head;
}

int _tmain(int argc, _TCHAR* argv[])
{
  int n,find;nodeptr *head=NULL;
  printf("Enter the number");
  scanf("%d",&n);
  head=insert(head,n);
  printf("Enter the element to be find from ending");
  scanf("%d",&find);
  head=nthelement(head,find);
  return 0;
}



