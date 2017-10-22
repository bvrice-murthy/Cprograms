#include<stdio.h>
#include<malloc.h>
struct node
{
	int num;
	struct node *next;
};
typedef struct node nodeptr;
nodeptr *createlinklist(nodeptr *head,int *array,int length)
{
	nodeptr *tail,*newnode;
	int i=0;
	while(i<length)
	{
		while(array[i]==0&&head==NULL)
			i++;
		if(i==length)
			break;
		newnode=(nodeptr *)malloc(1*sizeof(nodeptr));
		newnode->num=array[i];
		if(head==NULL)
		{
			newnode->next=NULL;
			tail=newnode;
			head=newnode;
		}
		else
		{
			tail->next=newnode;
			newnode->next=NULL;
			tail=newnode;
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
nodeptr *pointingmiddletolast(nodeptr *head)
{
	nodeptr *middle,*temp;
	int i=0,length=0;
	temp=head,middle=head;
	while(temp!=NULL)
	{
		length++;
		temp=temp->next;
	}
	while(i<length/2)
	{
		middle=middle->next;
		i++;
	}
	temp=head;
	while(temp->next!=NULL)
		temp=temp->next;
	temp->next=middle;
	temp=head;
	printf("After pointing middle element to the last elment\n");
	while(temp!=middle)
	{
		printf("%d->",temp->num);
		temp=temp->next;
	}
	while(temp->next!=middle)
	{
		printf("%d->",temp->num);
		temp=temp->next;
	}
	printf("%d->",temp->num);
	return head;
}


int main()
{
	int *array,length,i;nodeptr *head=NULL;
	printf("Enter the range of the array");
	scanf("%d",&length);
	array=(int *)malloc(length*sizeof(int));
	printf("Enter %d elements into the array",length);
	for(i=0;i<length;i++)
	{
		scanf("%d",&array[i]);
	}
	head=createlinklist(head,array,length);
	showlist(head);
	head=pointingmiddletolast(head);
	return 0;
}