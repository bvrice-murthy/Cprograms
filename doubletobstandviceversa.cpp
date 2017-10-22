#include<stdio.h>
#include<malloc.h>
struct node
{
	int num;
	struct node *left,*right;
};
typedef struct node nodeptr;
nodeptr *createbst(nodeptr *root,int element)
{	
	nodeptr *newnode;
	newnode=(nodeptr *)malloc(1*sizeof(nodeptr));
	if(root==NULL)
	{
		newnode->num=element;
		root=newnode;
		root->left=NULL;
		root->right=NULL;
		return root;
	}
	else
	{
		if(element>root->num)
		{
			root->right=createbst(root->right,element);
		}
		if(element<root->num)
		{
			root->left=createbst(root->left,element);
		}
	}
	return root;
}
void showbst(nodeptr *root)
{
	if(root==NULL)
		return;
	showbst(root->left);
	printf("%d\n",root->num);
	showbst(root->right);
}
nodeptr *createdoublelinklist(nodeptr *head,int *array,int range)
{
	nodeptr *tail,*newnode;int index=0;
	while(array[index]==0)
			index++;
	if(index<range)
	{
		newnode=(nodeptr *)malloc(1*sizeof(nodeptr));
		newnode->num=array[index];
		newnode->left=NULL;
		newnode->right=NULL;
		head=newnode;
		tail=head;index++;
	}
	while(index<range)
	{
							
		newnode=(nodeptr *)malloc(1*sizeof(nodeptr));
		newnode->num=array[index];
		tail->right=newnode;
		newnode->left=tail;
		tail=newnode;
		newnode->right=NULL;
		index++;
	}
	return head;
}
nodeptr *createdbstdoublelist(nodeptr *head,int element)
{
	nodeptr *newnode,*tail;
	newnode=(nodeptr *)malloc(1*sizeof(nodeptr));
	newnode->num=element;
	if(head==NULL)
	{
		newnode->left=NULL;
		newnode->right=NULL;
		head=newnode;
		
	}
	else
	{
		tail=head;
		while(tail->right!=NULL)
			tail=tail->right;
		newnode->left=tail;
		newnode->right=NULL;
		tail->right=newnode;
		tail=newnode;
	}
return head;
}


void showlist(nodeptr *head)
{
	
	while(head!=NULL)
	{
		printf("%d->",head->num);
		head=head->right;
	}
}
nodeptr *doublelisttobst(nodeptr *head)
{
	nodeptr *lefttemp,*righttemp,*root=NULL;
	int length=0,i=0;lefttemp=head;righttemp=head;
	while(lefttemp!=NULL)
	{
		length++;
		lefttemp=lefttemp->right;
	}
	while(i<length/2)
	{
		righttemp=righttemp->right;
		i++;
	}
	lefttemp=righttemp;
	root=createbst(root,righttemp->num);
	righttemp=righttemp->right;
	while(righttemp!=NULL)
	{
		root=createbst(root,righttemp->num);
		righttemp=righttemp->right;
	}
	lefttemp=lefttemp->left;
	while(lefttemp!=NULL)
	{
		root=createbst(root,lefttemp->num);
		lefttemp=lefttemp->left;
	}
	return root;
}
nodeptr *bsttodoublelist(nodeptr *root,nodeptr *head)
{
	
	
	if(root==NULL)
	{
				return head;

	}
	else
	{
		head=createdbstdoublelist(head,root->num);
		
		bsttodoublelist(root->left,head);
	//head=createdbstdoublelist(head,root->num);
		bsttodoublelist(root->right,head);
	}	
	return head;

	//showlist(head);
	
}

int main()
{
	int *array,range,index;nodeptr *head=NULL,*root=NULL,*head2=NULL;
	printf("Enter the range of the array\n");
	scanf("%d",&range);
	array=(int *)malloc(range*sizeof(int));
	printf("Enter %d number of elements into the array",range);
	for(index=0;index<range;index++)
	{
		scanf("%d",&array[index]);
	}
	head=createdoublelinklist(head,array,range);
	printf("Created list is\n");
	showlist(head);
	/*for(index=0;index<range;index++)
	{
		root=createbst(root,array[index]);
	}
	*/
	root=doublelisttobst(head);
	printf("\nCreated tree is\n");
	showbst(root);
	head2=bsttodoublelist(root,head2);
	printf("\nCreated double linked list from tree is\n");
	showlist(head2);
	return 0;
}