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
int main()
{
	int *array,range,i=0;nodeptr *root=NULL;
	printf("\nEnter the range of the array\n");
	scanf("%d",&range);
	printf("Enter %d number of elements ",range);
	array=(int *)malloc(range*sizeof(int));
	for(i=0;i<range;i++)
	{
		scanf("%d",&array[i]);
	}
	for(i=0;i<range;i++)
	{
		root=createbst(root,array[i]);
	}
	printf("\n the created bst is\n");
	showbst(root);

	return 0;
}




