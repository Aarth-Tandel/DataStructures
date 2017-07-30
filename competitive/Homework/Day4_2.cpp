#include <iostream>
#include <stdlib.h>
#include <algorithm>
using namespace std;

struct node
{
  int data;
  struct node *next;
};

void insert(struct node **h, int n)
{
  struct node* p4 = (struct node*)malloc(sizeof(struct node));
  struct node* curr;
  if((*h)==NULL)
  {
    *h=p4;
    p4->data=n;
    p4->next=NULL;
    return;
  }
  curr=*h;
  while(curr->next) curr=curr->next;
  curr->next=p4;
  p4->data=n;
  p4->next=NULL;
  return;
}

void traverse(struct node *h)
{
    while(h!=NULL)
    {
        cout<<h->data<<" ";
        h=h->next;
    }
    return ;
}

void add()

int main()
{
      struct node* head=NULL;
      struct node* head2=NULL;
      int n,n2,k,n1;
      cin>>n;
      for(int i=0;i<n;i++){
        cin>>k;
        insert(&head,k);
      }
      cin>>n1;
      for(int i=0;i<n1;i++){
        cin>>k;
        insert(&head2,k);
      }

      int val=n-n1;
      if(val<0){
        int val2=abs(val);
        while(val2--) insert(&head,0);
      }
      else if(val>0){
        int val2=abs(val);
        while(val2--) insert(&head2,0);
      }

      traverse(head);
      cout<<endl;
      traverse(head2);
      return 0;
}
