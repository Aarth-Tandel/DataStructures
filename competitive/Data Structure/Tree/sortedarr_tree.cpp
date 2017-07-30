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

tnode *arr2bst(int *arr, int low, int high)
{
  if(low <= high) return NULL;
  int mid = (high+low)/2;

  tnode *root = createnode(arr[mid]);
  root->left = arr2bst(arr, low, mid);
  root->right = arr2bst(arr, mid, high);

  return NULL;
}

int main()
{
  int n,a[100];
  cin>>n;
  for(int i=0; i<n; i++)  cin>>a[i];
  int low=a[0];int high=a[n-1];
  arr2bst(a, low, high);
  return 0;
}
