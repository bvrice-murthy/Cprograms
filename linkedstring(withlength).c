#include<stdio.h>
#include<stdlib.h>
struct node
{
	char data;
    struct node *next;
};
typedef struct node nodeptr;
nodeptr *insert(nodeptr *head,char *str,int n);
int main()
{
	int n;
	char *str;nodeptr *head=NULL;
    printf("Enter range ");
    scanf("%d",&n);
	printf("Enter %d lengthe string",n);
	str=(char *)malloc((n+1)*sizeof(int));
	scanf("%s",str);
    head=insert(head,str,n);
	while(head!=NULL)
	{
		printf("%c->",head->data);
		head=head->next;
	}
	return 0;
}
nodeptr *insert(nodeptr *head,char *str,int n)
{
	int i;nodeptr *p;
	
	for(i=n-1;i>=0;i--)
	{
		p=(nodeptr *)malloc(1*sizeof(nodeptr));
		p->data=str[i];
		p->next=head;
		head=p;
	}
return head;
}
