#include<stdio.h>
#include<malloc.h>
struct node
{
	char data;
	struct node *next;
};
typedef struct node list;

list *fun(list *h,char *s,int i)
{
	list *temp=NULL;
	if(s[i])
	{
		
	
	
	temp=(list *)malloc(sizeof(list)*1);
	temp->data=s[i];
	temp->next=h;

	h=temp;
	h=fun(h,s,i+1);
	}
	return h;
}



int main()
{ 
	char *s;
	int i=0;
	list *h=NULL;
	s=(char *)malloc(sizeof(char)*10);
	scanf("%s",s);
	h=fun(h,s,i);
	for(;h;h=h->next)
		printf(" %c",h->data);


	return 0;
}
