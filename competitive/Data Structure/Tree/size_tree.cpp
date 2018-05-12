#include <iostream>
using namespace std;

typedef struct node{
  int data;
  struct node* left, *right;
}tnode;

tnode* createnode(int data, tnode* left=NULL, tnode* right=NULL)
{
  tnode* p = new tnode;
  p->data = data;
  p->left = left;
  p->right = right;

  return p;
}

int size(tnode *root)
{
  if(root == NULL)  return 0;

  return(size(root->left) + 1 + size(root->right));
}

int main()
{
  tnode* root;
  root = createnode(1);
  root->left = createnode(2);
  root->right = createnode(3);
  root->left->right = createnode(5);
  root->left->left = createnode(6);
  cout<<size(root);
  return 0;
}
