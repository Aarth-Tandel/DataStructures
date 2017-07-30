#include<iostream>
#include<stdlib.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

void klast(struct node *h, int n, int l)
{
    struct node* curr=h;
    int t=n-l+1;
    while(t--)
    {
        curr=curr->next;
    }
    cout<<curr->data;
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

int length(struct node *h)
{
    int count=0;
    while(h->next)
    {
        h=h->next;
        count++;
    }
    //cout<<count+1;
    return count+1;
}

int main()
{
    //struct node *p = newnode();

    struct node* head=NULL;
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++)
        insert(&head,i);
    //traverse(head);
    //cout<<endl;
    //cout<<length(head);
    klast(head,n,k);
    return 0;
}
