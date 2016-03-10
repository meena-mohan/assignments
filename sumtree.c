#include <stdio.h>
#include<stdlib.h>
struct node
{
	int x;
	struct node* left;
	struct node* right;
}
struct node* newnode(int x)
{
	struct node* node=(struct node*)malloc(sizeof(struct node));
	node->x=x;
	node->left=NULL;
	node->right=NULL;
	return(node);
}
int sumtree(struct node* node)
{
	int c,leftnode,rightnode;
	if(node==NULL||node->left==NULL||node->right==NULL)
	{
	   c=1;
	}
	else
	{
		leftnode=Tree->left+Tree->left->left+Tree->left->right;
		rightnode=Tree->right+Tree->right->left+Tree->right->right;
		if(node->x==leftnode+rightnode)
		{
			c=1;
		}
		else
		{
			c=0;
		}
		
	}
	return c;
}

int main(void)
{
	  int d;
    struct node *Tree=newnode(26);
    Tree->left=newnode(3);
    Tree->left->left=newnode(3);
    Tree->right=newnode(10);
    Tree->right->left=newnode(4);
    Tree->right->left=newNode(6);
    d=sumtree(Tree);
    if(d==1)
    {
    	printf("true");
    }
    else
    {
    	printf("false");
    }
	  return 0;
}
