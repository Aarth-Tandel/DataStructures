// Counting number of leaves
#include<iostream>
using namespace std;

struct tnode{
int data;
struct tnode *left,*right;
};

struct tnode* newnode(int data)
{
    struct tnode* new_node = new tnode();
    new_node-> data = data;
    new_node-> left = NULL;
    new_node-> right = NULL;
    return new_node;
}

int leaves(struct tnode *root)
{

    if(root->right==NULL && root->left==NULL)   return 1;
    return (leaves(root->left)+leaves(root->right));
}

int main()
{
    struct tnode *root = newnode(1);
    root->left = newnode(2);
    root->right = newnode(3);
    root->left->left = newnode(4);
    root->left->right = newnode(5);
    root->right->left = newnode(6);
    root->right->right = newnode(7);
    cout<<leaves(root);
    return 0;
}
