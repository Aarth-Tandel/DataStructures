#include<iostream>
#include<stdlib.h>
#include<stack>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

stack <int>stk;

void insert_between(struct node * head ,int pos,int data)
{
		struct node * current= head;
		for(int i=1;i<pos-1;i++)
		{
			current=current->next;
		}
	struct node *p5=(struct node*)new(struct node) 	;

   p5->next=current->next;
    current->next=p5;
	 p5->data=data;
}


void delete_between(struct node * head ,int pos)
{
		struct node * current= head;
		if(head) return;

		for(int i=1;i<pos-2;i++)
		{
			current=current->next;
		}
	// struct node *p5=(struct node*)new(struct node) 	;

    current->next=current->next->next;
}


void delete_bottom(struct node **head)
{
     struct node * current= *head;
     struct node *p=*head;
	 if(head)
	 {
	 while(current->next)
	 { p=current; current=current->next; }
     }
   free(p->next);
   p->next=NULL;

}

void delete_top(struct node **head)
{
    //  struct node * current= *head;
     struct node *p=*head;
	(*head)=p->next;
}


void revprint(struct node *h,int n)
{
    while(h!=NULL)
    {
        stk.push(h->data);
        h=h->next;
    }
    for(int i=0;i<n;i++)
    {
        cout<<stk.top()<<" ";
        stk.pop();
    }
    return;
}

void length(struct node *h)
{
    int count=0;
    while(h->next)
    {
        h=h->next;
        count++;
    }
    cout<<count+1;
    return;
}
void del(struct node *h)
{
    struct node* prev;
    while(h->next)
    {
        prev=h;
        (h)=(h)->next;
    }
    free(prev->next);
    prev->next=NULL;
    return;
}

void front(struct node **h,int n)
{
    struct node* p5 = (struct node*)malloc(sizeof(struct node));
    p5->next=(*h);
    (*h)=p5;
    p5->data=n;
    return ;
}

void insert(struct node **h,int n)
{
    struct node* p4 = (struct node*)malloc(sizeof(struct node));
    struct node* curr = *h;
    if((*h)==NULL)
    {
        *h=p4;
        p4->data=n;
        p4->next=NULL;
        return ;
    }
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
    for(int i=1;i<n;i++)
        insert(&head,i);
    traverse(head);
    cout<<endl;
    //length(head);
    // revprint(head,n);
    //del(head);
    front( &head,0 );
    traverse(head);
    return 0;
}
