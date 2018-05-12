#include <iostream>
using namespace std;

typedef struct node{
  int data;
  struct node *left,*right;
}tnode;

void roottoleaf(tnode *root, int path[], int length);

void printpaths(tnode* root)
{
  int path[1000];
  roottoleaf(root, path, 0);
}

void print(int path[], int length)
{
  for(int i=0;i<length;i++)
  {
    cout<<path[i]<<" ";
  }
  cout<<endl;
  return;
}

void roottoleaf(tnode *root, int path[], int length)
{
  if(root == NULL)  return;

  path[length] = root->data;
  length++;

  if(root->right == NULL && root->left == NULL)
    print(path, length);
  else
  {
    roottoleaf(root->left, path, length);
    roottoleaf(root->right, path, length);
  }
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
  root = createnode(1);
  root->left = createnode(2);
  root->right = createnode(3);
  root->left->right = createnode(5);
  root->left->left = createnode(4);
  root->right->left = createnode(6);
  printpaths(root);
  return 0;
}
