#include<stdio.h>
#include<malloc.h>
struct node
{
	int num;
	struct node *next;
};
typedef struct node nodeptr;
nodeptr *createlist(nodeptr *head,int *array,int range)
{
	nodeptr *tail,*newNode;int i=0;
	
	while(i<range)
	{
		while(array[i]==0&&head==NULL)
			i++;
		newNode=(nodeptr *)malloc(1*sizeof(nodeptr));
		newNode->num=array[i];
		if(head==NULL)
		{
			newNode->next=head;
			head=newNode;
			tail=head;
		}
		else
		{
		
			tail->next=newNode;
			newNode->next=NULL;
			tail=newNode;
		}
		i++;
	}
return head;
}
void showlist(nodeptr *head)
{
	while(head!=NULL)
	{
		printf("%d->",head->num);
		head=head->next;
	}
}
int main()
{
	nodeptr *head=NULL,*head1=NULL,*head3=NULL;
	int *array,i,range;
	printf("Enter range of first array");
	scanf("%d",&range);
	array=(int *)malloc(range*sizeof(int));
	printf("Enter the elements into the array");
	for(i=0;i<range;i++)
	{
		scanf("%d",&array[i]);
	}
	head=createlist(head,array,range);
	printf("The first list is\n");
	showlist(head);
	return 0;
}