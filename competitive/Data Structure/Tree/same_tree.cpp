#include <iostream>
using namespace std;

typedef struct node{
  int data;
  struct node *left,*right;
}tnode;

tnode* createnode(int data, tnode* left= NULL, tnode* right=NULL)
{
  tnode* n1= new tnode;
  n1->data = data;
  n1->left = left;
  n1->right = right;

  return n1;
}

bool same(tnode* n1, tnode* n2)
{
  if( n1 == NULL && n2 == NULL )  return 1;

  if( n1!=NULL && n2!=NULL ){
  return((n1->data == n2->data) &&
  same(n1->left , n2->left) && same(n1->right , n2->right));
}
return 0;
}

int main()
{
  tnode* root;
  root = createnode(1);
  root->left = createnode(2);
  root->right = createnode(3);
  root->left->right = createnode(5);
  root->left->left = createnode(6);

  tnode* root2;
  root2 = createnode(1);
  root2->left = createnode(2);
  root2->right = createnode(3);
  root2->left->right = createnode(5);
  root2->left->left = createnode(6);
  cout<<same(root, root2);
  return 0;
}
