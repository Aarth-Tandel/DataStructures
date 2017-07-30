#include <iostream>
using namespace std;

typedef struct node{
  int data;
  struct node *left,*right;
}tnode;

void inorder(tnode* root)
{
  if(!root) return;

  inorder(root->left);
  if((root->left == NULL || root->right == NULL))
    if(!(root->left == NULL && root->right == NULL))
      cout<<root->data<<" ";
  inorder(root->right);
}

tnode* createnode(int data, tnode* left= NULL, tnode* right=NULL)
{
  tnode* n1= new tnode;
  n1->data = data;
  n1->left = left;
  n1->right = right;

  return n1;
}

int main()
{
  tnode* root;
  root = createnode(1);
  root->left = createnode(2);
  root->right = createnode(3);
  root->left->right = createnode(5);
  root->right->left = createnode(6);
  inorder(root);
  return 0;
}
