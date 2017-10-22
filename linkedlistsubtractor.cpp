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
	nodeptr *tail,*newnode;int i=0;
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
			head=newnode;
			tail=head;
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
nodeptr *createsubtractlist(nodeptr *head3,int element)
{
	nodeptr *tail,*newnode;
	newnode=(nodeptr *)malloc(1*sizeof(nodeptr));
	newnode->num=element;
	if(head3==NULL)
	{
		newnode->next=head3;
		//tail=newnode;
		//printf("taildat in first node is%d\n",tail->num);
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
nodeptr  *subtractlist(nodeptr *head,nodeptr *head1)
{
	nodeptr *carry1,*forward1,*carry2,*forward2,*head3=NULL;int length1=0,length2=0,i=0;
	carry1=head;carry2=head1;
	if(head1==NULL)
		return head;
	if(head==NULL)
	{
		head1->num=(-head1->num);
		return head1;
	}
	while(carry1!=NULL)
	{
		length1++;
		carry1=carry1->next;
	}
	while(carry2!=NULL)
	{
		length2++;
		carry2=carry2->next;
	}
	if(length1>length2)
	{
		carry1=head;forward1=head;
		carry2=head1;forward2=head1;i=0;
		while(i<length1-length2)
		{
			head3=createsubtractlist(head3,head->num);
			head=head->next;
			forward1=forward1->next;i++;
		}
		if(forward1->num<carry2->num)
		{
			forward1->num+=10;
			forward2=head3;
			while(forward2->next!=NULL)
				forward2=forward2->next;
			forward2->num-=1;
		}
		
	}
	if(length2>length1)
	{
		i=0;
		forward2=head1;
		forward1=head3;
		while(i<length2-length1)
		{
			head3=createsubtractlist(head3,head1->num);
			head1=head1->next;
			forward2=forward2->next;i++;
		}
		if(forward2->num<carry1->num)
		{
			forward2->num+=10;
		
		forward1=head3;
		while(forward1->next!=NULL)
			forward1=forward1->next;
		forward1->num-=1;
		}
	}
	while(head!=NULL||head1!=NULL)
	{
		carry1=head;forward1=head;
		if(carry1->next!=NULL)
		{
			carry1=forward1;
			forward1=forward1->next;
		}
		carry2=head1;forward2=head1;
		if(carry2->next!=NULL)
		{
			carry2=forward2;
			forward2=forward2->next;
		}

		if(forward1->num<forward2->num)
		{
			forward1->num+=10;
			carry1->num-=1;
		}
		if(carry1->num-carry2->num==0&&head3==NULL)
		{
			head=head->next;
			head1=head1->next;
		}
		else
		{

		head3=createsubtractlist(head3,carry1->num-carry2->num);
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
int *array,*array1,i=0,range1,range;
printf("Enter the range of the array");
scanf("%d",&range);
array=(int *)malloc(range*sizeof(int));
printf("Enter the elements into array");
for(i=0;i<range;i++)
{
	scanf("%d",&array[i]);
}
head=createlist(head,array,range);
printf("the first list is");
showlist(head);
printf("Enter the range of second array");
scanf("%d",&range1);
array1=(int *)malloc(range1*sizeof(int));
printf("Enter %d elements into second array\n",range1);
for(i=0;i<range1;i++)
{
	scanf("%d",&array1[i]);
}
head1=createlist(head1,array1,range1);
showlist(head1);
head3=subtractlist(head,head1);
printf("The subtracted list is\n");
showlist(head3);
return 0;
}
