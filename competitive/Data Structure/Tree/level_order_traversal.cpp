#include <iostream>
#include <queue>
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

void leveltrversal(tnode* root)
{
  queue <tnode*> q;
  q.push(root);
  q.push(NULL);

  while(!q.empty())
  {
    tnode *temp=q.front();
    q.pop();
    if(temp!=NULL)
    {
      cout<<temp->data<<" ";
      if(temp->left)
        q.push(temp->left);
      if(temp->right)
        q.push(temp->right);
    }
    else{
      cout<<endl;
      if(q.empty()==0)
        q.push(NULL);
    }
  }
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

  leveltrversal(root);
  return 0;
}
