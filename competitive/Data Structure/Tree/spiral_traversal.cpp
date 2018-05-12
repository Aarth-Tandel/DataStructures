#include <iostream>
#include <stack>
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
  stack <tnode*> stk1;
  stack <tnode*> stk2;
  stk1.push(root);
  while( !stk1.empty() || !stk2.empty())
  {
      while( !stk1.empty() )
      {
        tnode *temp=stk1.top();
        stk1.pop();
        cout<<temp->data<<" ";
        if(temp->right)  stk2.push(temp->right);
        if(temp->left)  stk2.push(temp->left);
      }

      while( !stk2.empty() )
      {
        tnode *temp=stk2.top();
        stk2.pop();
        cout<<temp->data<<" ";
        if(temp->right)  stk1.push(temp->right);
        if(temp->left)  stk1.push(temp->left);
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
