#include<iostream>
#include<stdlib.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

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

void merge(struct node *h,struct node *h1,struct node **h3,int n,int m)
{
    int k=m+n;
    struct node* ptr1;
    struct node* ptr2;
    struct node* cpy=*h3;
    ptr1=h; ptr2=h1;
    for(int i=0;i<m+n;i++)
    {
        if(ptr1!=NULL && ptr2!=NULL && (ptr1->data)<(ptr2->data))
        {
            insert(&cpy,ptr1->data);
            cout<<ptr1->data<<" ";
            ptr1=ptr1->next;
        }
        else if(ptr1!=NULL && ptr2!=NULL && (ptr1->data)<(ptr2->data))
        {
            insert(&cpy,ptr2->data);
            cout<<ptr2->data<<" ";
            ptr2=ptr2->next;
        }
        else if(ptr1==NULL)
        {
            insert(&cpy,ptr2->data);
            cout<<ptr2->data<<" ";
            ptr2=ptr2->next;
        }
        else
        {
            insert(&cpy,ptr2->data);
            cout<<ptr1->data<<" ";
            ptr1=ptr1->next;
        }
    }
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
    struct node* head1=NULL;
    struct node* head3=NULL;

    int n,d,m;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>d;
        insert(&head,d);
    }
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>d;
        insert(&head1,d);
    }
    merge(head,head1,&head3,n,m);
    traverse(head3);
    return 0;
}
