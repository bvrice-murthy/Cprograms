#include<stdio.h>
#include<malloc.h>
struct node
{
	int num;
	struct node *next,*next1;
};
typedef struct node nodeptr;
nodeptr *createlist(nodeptr *head,int *array,int length)
{
		nodeptr *temp,*tail;
	int i=0;
	while(i<length)
	{
		
		temp=(nodeptr *)malloc(1*sizeof(nodeptr));
		temp->num=array[i];
		temp->next=NULL;
		if(head==NULL)
		{
			
			head=temp;
		}
		else
		{
			tail=head;
			while(tail->next!=NULL)
			{
				tail=tail->next;
			}
			tail->next=temp;
		}
		i++;
	}
return head;
}
nodeptr *createnextpointer(nodeptr *head)
{
	nodeptr *find,*tail,*temp;
	int i=0;
	tail=head;temp=head;
	while(temp!=NULL)
	{
		i=0;
		find=temp;
		while(i<4&&find!=NULL)
		{
			find=find->next;
			i++;
		}
		if(find!=NULL)
		{
			tail->next1=find;
			tail=tail->next;
		}
		else
		{
			while(tail!=NULL)
			{
				tail->next1=NULL;
				tail=tail->next;
			}
		}
		temp=temp->next;
	}
	return head;
}

void showlistpointer(nodeptr *head)
{
	while(head->next1!=NULL)
	{
		
		printf("%d->",head->num);
		/*if(head->next1==NULL)
			break;*/

		printf("%d->",head->next1->num);
		head=head->next;
	}
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
	int i=0,range,*array;
	nodeptr *head=NULL;
	printf("Enter range of array");
	scanf("%d",&range);
	array=(int *)malloc(range*sizeof(int));
	printf("Enter the elements into the array");
	for(i=0;i<range;i++)
	{
		scanf("%d",&array[i]);
	}
	head=createlist(head,array,range);
	showlist(head);
	head=createnextpointer(head);
	printf("\nAfter Entering the next1 pointer the list is\n"); 
	showlistpointer(head);

	return 0;
}


