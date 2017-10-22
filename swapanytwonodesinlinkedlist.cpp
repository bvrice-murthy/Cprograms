#include<stdio.h>
#include<malloc.h>
struct node
{
	int num;
	struct node *next;
};
typedef struct node nodeptr;
nodeptr *createlist(nodeptr *head,int element)
{
	nodeptr *tail,*newnode;
	newnode=(nodeptr *)malloc(1*sizeof(nodeptr));
	newnode->num=element;
	if(head==NULL)
	{
			newnode->next=NULL;
			head=newnode;
	}

	else
	{
		tail=head;
		while(tail->next!=NULL)
			tail=tail->next;
		tail->next=newnode;
		newnode->next=NULL;
		
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

nodeptr *swaptwoconsecutivenodes(nodeptr *head,int pos,int range)
{
	nodeptr *end,*start,*temp=head;int i=0;
	start=head;end=head;temp=head;
//	printf("%d",temp->num);
	if(pos>0&&pos<=range-1)
	{
		while(i<pos&&end->next!=NULL)
		{
			start=end;
			end=end->next;
			i++;
		}
	
		if(start==temp)
		{
			temp=temp->next;
			start->next=temp->next;
			end->next=start;
			head=end;
		}
		else
		{
			while(temp->next!=start)
			{
				temp=temp->next;
			}
			if(end->next!=NULL)
			{
				start->next=end->next;
				end->next=start;
				temp->next=end;
			}
			else
			{
				temp->next=end;
				end->next=start;
				start->next=NULL;
			}
		}
		printf("\nAfter swapping consecutive nodes the list is\n");
		showlist(head);
	}

	else
	{
		/*temp=head;
		start->next=temp;
		end->next=temp->next;
		temp->next=NULL;
		head=end;*/
		printf("swap is not possible ");
		
	}
	


return head;
}

int main()
{
	nodeptr *head=NULL,*head1=NULL;int *array,i,range,pos;

	printf("Enter the range of array");
	scanf("%d",&range);
	printf("Enter %d number of elements into array",range);
	array=(int *)malloc(range*sizeof(int));
	for(i=0;i<range;i++)
		scanf("%d",&array[i]);
	for(i=0;i<range;i++)
	{
		head=createlist(head,array[i]);
	}
	showlist(head);
	printf("\nEnter from which position the node to be sswapped\n");
	scanf("%d",&pos);
	head1=swaptwoconsecutivenodes(head,pos,range);
	//showlist(head1);
	return 0;
}
