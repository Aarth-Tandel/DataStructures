#include <iostream>
using namespace std;

typedef struct node{
  int data;
  struct node *left,*right;
}tnode;

tnode* createnode(int data, tnode* left = NULL, tnode* right = NULL)
{
  tnode *n1 = new tnode;
  n1->data = data;
  n1->left = NULL;
  n1 ->right = NULL;

  return n1;
}

void level(tnode* root, int lev, int *max)
{
  if(root == NULL ) return;

  if(*max < lev)
  {
    cout<<root->data<<" ";
    *max=lev;
  }
  level(root->left,lev+1,max);
  level(root->right,lev+1,max);
}

void view(tnode *root)
{
  int max=0;
  level(root,1,&max);
}

int main()
{
  tnode *root;
  root = createnode(1);
  root->left = createnode(2);
  root->right = createnode(3);
  root->left->right = createnode(5);
  root->left->left = createnode(4);
  root->right->right = createnode(6);
  root->right->left = createnode(7);
  view(root);
  return 0;
}
