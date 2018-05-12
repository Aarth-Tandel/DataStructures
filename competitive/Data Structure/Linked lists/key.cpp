#include<iostream>
#include<stdlib.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

int find(struct node *h,int k)
{
    while(h!=NULL)
    {
        if(h->data==k)  return 1;
        h=h->next;
    }
    return 0;
}

void insert(struct node **h,int n)
{
    struct node* p4 = (struct node*)malloc(sizeof(struct node));
    struct node* curr = (struct node*)malloc(sizeof(struct node));
    if((*h)==NULL)
    {
        *h=p4;
        p4->data=n;
        p4->next=NULL;
        return ;
    }
    curr=(*h);
    while(curr->next)    curr=curr->next;
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

int main()
{
    //struct node *p = newnode();

    struct node* head=NULL;
    int n,k;
    cin>>n;
    for(int i=0;i<n;i++)
        insert(&head,i);
    traverse(head);
    cout<<endl;
    cin>>k;
    cout<<find(head,k);
    return 0;
}
