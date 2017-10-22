#include<stdio.h>
#include<malloc.h>
struct node
{
	char data;
	struct node *next;
};
typedef struct node nodeptr;
nodeptr *createstringlist(nodeptr *head,char *string)
{
	nodeptr *newnode,*tail;
	int i=0;
	while(string[i]!='\0')
	{
		newnode=(nodeptr *)malloc(1*sizeof(nodeptr));
		newnode->data=string[i];
		if(head==NULL)
		{
			head=newnode;
			tail=head;
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
nodeptr *reversestringlist(nodeptr *head1)
{
	nodeptr *prev=NULL,*current=head1,*next=NULL;
	while(current!=NULL)
	{
		next=current->next;
		current->next=prev;
		prev=current;
		current=next;
	}
	head1=prev;
	return head1;
}
nodeptr *linkedpalindrome(nodeptr *head,nodeptr *head1)
{
	
	/*head1=reversestringlist(head1);
	head=reversestringlist(head);*/
	while(head!=NULL&&head1!=NULL)
	{
		if(head->data!=head1->data)
			break;
		head=head->next;
		head1=head1->next;
	}
	if(head==NULL&&head1==NULL)
	{
		printf("Entered list is palindrome");
	}
	else
	{
		printf("Not a palindrome list");
	}
return head;
}

void showlist(nodeptr *head)
{
	while(head!=NULL)
	{
		printf("%c->",head->data);
		head=head->next;
	}
}
int main()
{
	nodeptr *head=NULL,*head1=NULL,*head3;
	char *string;int range;
	printf("Enter the range of the string");
	scanf("%d",&range);
	printf("Enter the %d length string",range);
	string=(char *)malloc(range+1*sizeof(char));
	gets(string);
	gets(string);
	head=createstringlist(head,string);
	printf("The created list is\n");
	showlist(head);
	head=reversestringlist(head);
	printf("The reversed list is \n");
	showlist(head);
	/*printf("Here\n");
	showlist(head);*/
	head1=createstringlist(head1,string);
	head3=linkedpalindrome(head,head1);
	return 0;
}