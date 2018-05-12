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

void preorder(struct tnode *root)
{
    if(root==NULL)  return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(struct tnode *root)
{
    if(root==NULL)  return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void postorder(struct tnode *root)
{
    if(root==NULL)  return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
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
    preorder(root);
    cout<<endl;
    inorder(root);
    cout<<endl;
    postorder(root);
    return 1;
}
