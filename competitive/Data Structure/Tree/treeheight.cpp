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

int maxi(struct tnode *root)
{
    if(root==NULL)  return 0;
    else return 1+max(maxi(root->left),maxi(root->right));
}

int main()
{
    struct tnode *root = newnode(1);
    root->left = newnode(0);
    root->right = newnode(0);
    root->left->left = newnode(4);
    root->left->right = newnode(5);
    root->right->left = newnode(6);
    root->right->right = newnode(7);
    cout<<maxi(root);
    return 0;
}
