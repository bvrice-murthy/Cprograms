#include<stdio.h>
#include<malloc.h>
struct node
{
	int num;
	struct node *left,*right;
};
typedef struct node nodeptr;
nodeptr *createdoublelinklist(nodeptr *head,int *array,int range)
{
	nodeptr *tail,*newnode;int i=0;
	
	while(i<range)
	{
		while(array[i]==0&&head==NULL)
			i++;
		if(i==range)
			break;
		newnode=(nodeptr *)malloc(1*sizeof(nodeptr));
		newnode->num=array[i];
		if(head==NULL)
		{
			newnode->left=NULL;
			head=newnode;
			tail=head;
		}
		else
		{
			tail->right=newnode;
			newnode->left=tail;
			tail=newnode;
		}
		i++;
		newnode->right=NULL;
	}
	return head;
}
nodeptr *createbst(nodeptr *head,nodeptr *root)
{
	nodeptr *temp,*newnode;
	while(head!=NULL)
	{
		newnode=(nodeptr *)malloc(1*sizeof(nodeptr));
		newnode->num=head->num;
		if(root==NULL)
		{
			root=newnode;
			head=head->right;
		}
		else
		{
			temp=root;
			if(temp->left==NULL&&temp->right==NULL)
			{
				if(newnode->num>temp->num)
					temp->right=newnode;
				else
					temp->left=newnode;
			}
			else
			{
				while(temp->left!=NULL||temp->right!=NULL)
				{
					if(newnode->num>temp->num)
					{
						temp=temp->right;
					}
					else if(newnode->num<temp->num)
					{
						temp=temp->left;
					}
					if(temp->left!=NULL&&temp->right==NULL)
						temp=temp->left;
					if(temp->right!=NULL&&temp->left==NULL)
						temp=temp->right;
				}
				/*if(temp==root&&newnode->num>temp->num)
				{
					temp->right=newnode;
				}
				else if(temp==root&&newnode->num<temp->num)
				{
					temp->left=newnode;
				}*/
				if(temp->num<newnode->num&&temp->left!=NULL&&temp->right==NULL)
				{
					temp=temp->left;
					temp->left=newnode;
				}
				if(temp->num>newnode->num&&temp->right!=NULL&&temp->left==NULL)
				{	
					temp=temp->right;
					temp->right=newnode;
				}
				if(temp->num<newnode->num)
					temp->right=newnode;
				if(temp->num>newnode->num)
					temp->left=newnode;
			}
			
			head=head->right;
		}
		newnode->left=NULL;
		newnode->right=NULL;
	}
return root;
}
void showbst(nodeptr *root)
{
	if(root==NULL)
		return;
	showbst(root->left);
	showbst(root->right);
	printf("%d\n",root->num);
}
void showlist(nodeptr *head)
{
	
	while(head!=NULL)
	{
		printf("%d->",head->num);
		head=head->right;
	}
}
int main()
{
	nodeptr *head=NULL,*root=NULL;int *array,i,range;
	printf("Enter the range of the array");
	scanf("%d",&range);
	array=(int *)malloc(range*sizeof(int));
	printf("Enter the range of the array"); 
	for(i=0;i<range;i++)
	{
		scanf("%d",&array[i]);
	}
	head=createdoublelinklist(head,array,range);
	showlist(head);
	printf("The created treeis \n");
	root=createbst(head,root);
	showbst(root);
	return 0;
}





