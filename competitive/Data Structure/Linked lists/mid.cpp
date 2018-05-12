#include<iostream>
#include<stdlib.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

void mid(struct node *h,int n)
{
    int m=(n/2);
    while(m--)  h=h->next;
    cout<<h->data<<endl;
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
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        insert(&head,i);
    traverse(head);
    cout<<endl;
    mid(head,n);
    return 0;
}
