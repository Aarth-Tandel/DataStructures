#include <iostream>
using namespace std;

typedef struct node{
  int data;
  struct node *left,*right;
}tnode;

int sum(tnode* root)
{
  if(root == NULL) return 0;

  return(sum(root->left) + root->data + sum(root->right));
}

int check(tnode *root)
{
  if( root == NULL && (root->left==NULL || root->right==NULL)) return 1;

  int lt = sum(root->left);
  int lr = sum(root->right);
  if(root->data == (lt + lr ) && check(root->right)  && check(root->left))
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
  cout<<check(root);
  return 0;
}
