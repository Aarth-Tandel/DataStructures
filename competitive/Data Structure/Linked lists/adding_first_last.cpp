#include <iostream>
#include <stdlib.h>
using namespace std;

struct node
{
        int data;
        struct node *next;
};

struct node* reverse(struct node *head)
{
        struct node* prev=NULL;
        struct node* current=head;
        struct node* temp;
        while (current)
        {
                temp  = current->next;
                current->next = prev;
                prev = current;
                current = temp;
        }
        head = prev;
        return (head);
}

struct node* add(struct node* head)
{
        struct node* fast=head;
        struct node* current=head;
        struct node* slow=head;
        struct node* last=NULL;
        while(fast && fast->next)
        {       last = slow;
                fast = fast->next->next;
                slow = slow->next; }
        struct node* new1 = reverse(slow);
        last->next = new1;
        struct node* f=head;
        struct node* mid=head;
        struct node* l=NULL;
        while(f && f->next)
        {
                l = mid;
                f = f->next->next;
                mid = mid->next;
        }
        struct node* cpym = mid;
        cout<<cpym->data;
        while(cpym)
        {
                current->data = current->data + cpym->data;
                current = current->next;
                cpym = cpym->next;
        }
        struct node* new2=reverse(mid);
        l->next = new2;
        return head;
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
        //struct node *p = newnode();

        struct node* head=NULL;
        int n;
        cin>>n;
        for(int i=0; i<n; i++)
                insert(&head,i);
        traverse(head);
        cout<<endl;
        add(head);
        cout<<endl;
        traverse(head);
        return 0;
}
