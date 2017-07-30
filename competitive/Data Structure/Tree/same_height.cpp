#include <iostream>
#include <stdlib.h>
using namespace std;

typedef struct node{
  int data;
  struct node *left,*right;
}tnode;

int height(tnode *root)
{
  if (root == NULL) return 0;

  return 1 + max(height(root->left),height(root->right));
}

bool balance(tnode* root)
{
  if(root == NULL)  return 1;

  int lt = height(root->left);
  int rt = height(root->right);

  if(abs(lt - rt) <= 1 && balance(root->left)
      && balance(root->right))
      return 1;

  return 0;
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
  root->left->left = createnode(6);
  root->left->left->left = createnode(6);
  // root->right->right = createnode(5);
  // root->right->left = createnode(6);
  cout<<balance(root);
  return 0;
}
