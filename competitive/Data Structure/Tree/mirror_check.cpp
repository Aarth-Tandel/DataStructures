#include <iostream>
using namespace std;

typedef struct node{
  int data;
  struct node* left , *right;
}tnode;

tnode* createnode(int data, tnode* left=NULL, tnode* right =NULL)
{
  tnode* p = new tnode;
  p->data= data;
  p->right = right;
  p->left = left;

  return p;
}

int f(tnode *r1, tnode * r2)
{
  if(!r1&&!r2) return 1;

  if(r1->data == r2->data)
  {
    // cout<<" r1= "<<r1->data<<" r2= "<<r2->data<<endl;
    return (f(r1->left , r2->right) + f(r1->right , r2->left) - 1);
  }
  return 0;
}

bool check(tnode* n1, tnode *n2)
{
  if( n1 == NULL && n2 == NULL) return 1;

  if( n1 != NULL && n2 != NULL)
  {
    return ((n1->data == n2->data) &&
    check(n1->left, n2->right) && check(n1->right, n2->left));
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
  root2->left = createnode(3);
  root2->right = createnode(2);
  root2->right->right = createnode(6);
  root2->right->left = createnode(5);
  cout<<check(root, root2)<<endl;
  cout<<f(root, root2)<<endl;
  return 0;
}
