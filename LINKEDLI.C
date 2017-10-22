#include<stdio.h>
#include<malloc.h>
struct node
{
int data;
struct node *next;
};
typedef struct node nodeptr;
nodeptr *linkedlist(nodeptr* head,int x);
int main()
{
int num;nodeptr *head=NULL;
printf("enter a number");
scanf("%d",&num);
head= linkedlist(head,num);
while(head!=NULL)
{
	printf("%d->",head->data);
	head=head->next;
}
return 0;
}
nodeptr *linkedlist(struct node *head,int x)
{
nodeptr *temp,*p=head;
//temp=(nodeptr *)malloc(sizeof(nodeptr)*1);
while(x>0)
{
temp=(nodeptr *)malloc(sizeof(nodeptr)*1);
temp->data=x%10;
temp->next=head;
head=temp;
x=x/10;
}


return head;
}
