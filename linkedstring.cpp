#include<stdio.h>
#include<stdlib.h>
struct node
{
	char data;
    struct node *next;
};
typedef struct node nodeptr;
nodeptr *insert(nodeptr *head,char *string);
int main()
{
	int n;
	char *str;nodeptr *head=NULL;
    printf("Enter range ");
    scanf("%d",&n);
	printf("Enter %d lengthe string",n);
	str=(char *)malloc((n+1)*sizeof(int));
	scanf("%s",str);
    head=insert(head,str);
	while(head!=NULL)
	{
		printf("%c->",head->data);
		head=head->next;
	}
	return 0;
}
nodeptr *insert(nodeptr *head,char *string)
{
	int i=0;nodeptr *newnode,*tail;
	while(string[i]!='\0')
	{
		newnode=(nodeptr *)malloc(1*sizeof(nodeptr));
		newnode->data=string[i];
		if(head==NULL)
		{
			newnode->next=head;
			head=newnode;
			tail=newnode;
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
