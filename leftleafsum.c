
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int key;
    struct node* left;
    struct node* right;
};
struct node* newnode(int k)
{
    struct node* node=(struct node*)malloc(sizeof(struct node));
    node->key = k;
    node->right = node->left = NULL;
    return(node);
}
int Leafnode(struct node* node)
{
   if (node == NULL)
       return 0;
   if (node->left == NULL && node->right == NULL)
       return 1;
   return 0;
}
int leftleafSum(struct node* root)
{
    int val=0;
    if (root != NULL)
    {
       if (Leafnode(root->left))
            val=val+root->left->key;
       else 
            val=val+leftleafSum(root->left);
       val=val+leftleafSum(root->right);
    }
    return val;
}
int main()
{
    struct node *root=newnode(15);
    root->left=newnode(9);
    root->right=newnode(20);
    root->right->left=newnode(16);
    root->right->right=newnode(25);
    root->left->left=newnode(4);
    root->left->right=newnode(13);
    root->left->right->left=newnode(10);
    root->left->right->right=newnode(14);
    printf("%d is the sum",leftleafsum(root));
    return 0;
}
