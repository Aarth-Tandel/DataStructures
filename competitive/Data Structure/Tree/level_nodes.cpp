#include <iostream>
using namespace std;

typedef struct node{
  int data;
  struct node *left,*right;
}tnode;

void level(tnode *root, int k)
{
  if(!root) return;
  if(k==0)  cout<<root->data<<" ";

  level(root->left,k-1);
  level(root->right,k-1);
}


tnode* createnode(int data, tnode *left=NULL, tnode *right=NULL)
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
  root = createnode(10);
  root->left = createnode(8);
  root->right = createnode(2);
  root->left->right = createnode(5);
  root->left->left = createnode(3);
  root->right->left = createnode(2);
  level(root,1);
  return 0;
}
