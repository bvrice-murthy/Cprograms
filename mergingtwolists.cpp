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
nodeptr *mergelist(nodeptr *head1,nodeptr *head2)
{
	nodeptr *head3=NULL,*node1,*temp;
	if(head1==NULL)
		return head2;
	if(head2==NULL)
		return head1;
	if(head3==NULL)
	{
			if(head1->num<=head2->num)
				{
					node1=(nodeptr *)malloc(1*sizeof(nodeptr));
					node1->num=head1->num;
					head3=node1;
					temp=head3;
					head1=head1->next;
					node1->next=NULL;
					
				}
				else if(head2->num<=head2->num) 
				{
					node1=(nodeptr *)malloc(1*sizeof(nodeptr));
					node1->num=head2->num;
					head3=node1;
					temp=head3;
					head2=head2->next;
					node1->next=NULL;
				}
		}
		
	while(head1!=NULL||head2!=NULL)
	{
		node1=(nodeptr *)malloc(1*sizeof(nodeptr));
		if(head1==NULL)
		{
			temp->next=head2;
			while(head2!=NULL)
				head2=head2->next;
		}
		else if(head2==NULL)
		{
			temp->next=head1;
			while(head1!=NULL)
				head1=head1->next;
		}
		else
		{
			if(head1->num<=head2->num)
			{
				node1->num=head1->num;
				node1->next=NULL;
				head1=head1->next;
				temp->next=node1;
				temp=node1;		
			}
			else if(head1->num>=head2->num)
			{
				node1->num=head2->num;
				node1->next=NULL;
				head2=head2->next;
				temp->next=node1;
				temp=node1;
			}
			}
		}
return head3;
}
int main()
{
	int i=0,*array,range;
	nodeptr *head1=NULL,*head2=NULL,*head3=NULL;
	printf("Enter range of array");
	scanf("%d",&range);
	printf("Enter the elemnts into the array in sorted order");
	array=(int *)malloc(range*sizeof(int));
	for(i=0;i<range;i++)
	{
		scanf("%d",&array[i]);
	}
	head1=createlist(head1,array,range);
	/*while(head1!=NULL)
	{
		printf("%d->",head1->num);
		head1=head1->next;
	}*/
	printf("Enter range of another array");
	scanf("%d",&range);
	array=(int *)malloc(range*sizeof(int));
	printf("Enter another sorted array elements");
	for(i=0;i<range;i++)
	{
		scanf("%d",&array[i]);
	}
	head2=createlist(head2,array,range);
	/*while(head2!=NULL)
	{
		printf("%d->",head2->num);
		head2=head2->next;
	}*/
	head3=mergelist(head1,head2);
	printf("%d->",head3->num);
	head3=head3->next;
	while(head3!=NULL)
	{
		printf("%d->",head3->num);
		head3=head3->next;
		
		
	}
	return 0;
}


