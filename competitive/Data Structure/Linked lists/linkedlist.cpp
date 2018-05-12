#include<iostream>
#include<stdlib.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

void traverse(struct node *h)
{
    while(h!=NULL){
    cout<<h->data<<endl;
    h=h->next;
    }
}
int main()
{

    struct node* p = (struct node*)malloc(sizeof(struct node));         //struct node *p = newnode();
    struct node* p1 = (struct node*)malloc(sizeof(struct node));
    struct node* p2 = (struct node*)malloc(sizeof(struct node));
    struct node* p3 = (struct node*)malloc(sizeof(struct node));
    struct node* head=p;
    p->data=2;
    p->next=p1;
    p1->data=3;
    p1->next=p2;
    p2->data=4;
    p2->next=p3;
    p3->data=5;
    p3->next=NULL;
    traverse(head);
}
