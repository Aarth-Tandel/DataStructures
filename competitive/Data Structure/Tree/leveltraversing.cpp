#include <iostream>
using namespace std;

struct tnode{
int data;
struct tnode *left,*right;
};

struct tnode* newnode(int data)
{
    struct tnode* new_node = new tnode();
    new_node-> data = data;
    new_node-> left = NULL;
    new_node-> right = NULL;
    return new_node;
}

void k_level(struct tnode* root,int k)
{
  if(root==NULL)  return;
  if (k==1){
    cout<<root->data<<" ";
    return;
  }
  k_level(root->left,k-1);
  k_level(root->right,k-1);
}

int main(int argc, char const *argv[]) {
  struct tnode *root = newnode(1);
  root->left = newnode(2);
  root->right = newnode(3);
  root->left->left = newnode(4);
  root->left->right = newnode(5);
  root->right->left = newnode(6);
  root->right->right = newnode(7);
  int k;
  cin>>k;
  k_level(root,k);
  return 1;
  return 0;
}
