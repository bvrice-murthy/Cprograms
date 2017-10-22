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
		if(i==range)
			break;
	
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
nodeptr *createaddlist(nodeptr *head3,int element)
{
	nodeptr *tail,*newnode;
	newnode=(nodeptr *)malloc(1*sizeof(nodeptr));
	newnode->num=element;
	if(head3==NULL)
	{
			newnode->next=head3;
			head3=newnode;
			
	
	}

	else
	{
		tail=head3;
		while(tail->next!=NULL)
			tail=tail->next;
		tail->next=newnode;
		newnode->next=NULL;
		
	}
	
	
return head3;
}
nodeptr *addlist(nodeptr *head,nodeptr *head1)
{
	nodeptr *carry,*forward,*head3=NULL,*newNode,*tail;
	int length1=0,length2=0,i;
	carry=head;forward=head1;
	if(head==NULL)
		return head1;
	if(head1==NULL)
		return head;
	while(carry!=NULL)
	{
		length1++;
		carry=carry->next;
	}
	while(forward!=NULL)
	{
		length2++;
		forward=forward->next;
	}
	if(length1>length2)
	{
		i=0;
		while(i<length1-length2)
		{
			head3=createaddlist(head3,head->num);
			head=head->next;
			i++;
		}
	}
	else
	{
		i=0;
		while(i<length2-length1)
		{
			head3=createaddlist(head3,head1->num);
			head1=head1->next;
			i++;
		}
	}
	while(head!=NULL||head1!=NULL)
	{
		newNode=(nodeptr *)malloc(1*sizeof(nodeptr));
		newNode->num=head->num+head1->num;
		if(newNode->num<=9)
		{
			head3=createaddlist(head3,newNode->num);
			head=head->next;
			head1=head1->next;
		}
		else
		{
			
			if(head3==NULL)
			{
				head3=createaddlist(head3,0);
				
			}
			tail=head3;carry=head3;
			forward=head3;

			while(tail->next!=NULL)
			{
				if(carry->num<9)
				{
					carry=forward;
					forward=forward->next;
				}
				else
				{
					forward=forward->next;
				}
				tail=tail->next;
			}
			if(forward->num==9)
			{
				forward->num=0;
				head3=createaddlist(head3,newNode->num%10);
				forward=forward->next;
				carry->num+=1;
				carry=carry->next;
				while(carry->next!=forward)
				{
					carry->num=0;
					carry=carry->next;
				}
			}
			else
			{
				forward->num+=1;
				head3=createaddlist(head3,newNode->num%10);
			}
			if(head3->num>9)
			{
				newNode=(nodeptr *)malloc(1*sizeof(nodeptr));
				newNode->num=head3->num%10;
				newNode->next=head3->next;
				head3->next=newNode;
				head3->num/=10;
			}
			
			head=head->next;
			head1=head1->next;
		}
	}
	

return head3;
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
	int *array,i,range,*array1,range1;
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
	printf("Enter the second array range\n");
	scanf("%d",&range1);
	array1=(int *)malloc(range1*sizeof(int));
	printf("Enter %d number of elements into second array",range1);
	for(i=0;i<range1;i++)
	{
		scanf("%d",&array1[i]);
	}
	head1=createlist(head1,array1,range1);
	printf("The second list\n");
	showlist(head1);
	printf("\nThe addition list is \n");
	head3=addlist(head,head1);
	showlist(head3);
	return 0;
}
