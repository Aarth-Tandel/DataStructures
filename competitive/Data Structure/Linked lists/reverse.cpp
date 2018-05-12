#include <iostream>
#include <stdlib.h>
#include <stack>
using namespace std;

struct node
{
        int data;
        struct node *next;
};

struct node* reverse(struct node** h,int k)
{
        struct node* prev=NULL;
        struct node* current=*h;
        struct node* temp;
        while (k--)
        {
                temp  = current->next;
                current->next = prev;
                prev = current;
                current = temp;
        }
        *h = prev;
        return (*h);
}

void insert(struct node **h,int n)
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
        curr=(*h);
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
        return;
}

int main()
{
        struct node* head=NULL;
        int n;
        cin>>n;
        for(int i=0; i<n; i++) {
                int j;
                cin>>j;
                insert(&head,j);
        }
        reverse(&head);
        traverse(head);
        cout<<endl;
        return 0;
}
