#include<stdio.h>
#include<malloc.h>
struct node
{
	int num;
	struct node *next;
};
typedef struct node nodeptr;
nodeptr *createlist(nodeptr *head,int *array,int length)
{
	nodeptr *tail,*newnode;
	int i=0;
	while(i<length)
	{
		newnode=(nodeptr *)malloc(1*sizeof(nodeptr));
		newnode->num=array[i];
		if(head==NULL)
		{
			head=newnode;
			tail=newnode;
		}
		else
		{
			tail->next=newnode;
			tail=newnode;
		}
		newnode->next=NULL;
		i++;
	}
return head;
}
nodeptr *reverselist(nodeptr *head,nodeptr *prev)
{
	nodeptr *next,*current=head;
	
		if(current==NULL)
		{
			return prev;
		}
		else
		{
			next=head->next;
			current->next=prev;
			prev=current;
			return 	current=reverselist(next,prev);
		}
	
	//return prev;
	
}
int main()
{
	nodeptr *head=NULL,*prev;int *array,length,i;
	printf("Enter the range of the array");
	scanf("%d",&length);
	printf("Enter%d number of elements",length);
	array=(int *)malloc(length*sizeof(int));
	for(i=0;i<length;i++)
	{
		scanf("%d",&array[i]);
	}
	head=createlist(head,array,length);
	prev=NULL;
	head=reverselist(head,prev);
	while(head!=NULL)
	{
		printf("%d->",head->num);
		head=head->next;
	}
	
	return 0;
}