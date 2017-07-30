#include<iostream>
#include<stdlib.h>
using namespace std;

struct node
{
	int data;
	struct node *next;
};               //*head=NULL;

void push(struct node **head,int data1)
{
	struct node* p5=new struct node;
	struct node* current=new struct node;
	if(*head==NULL)
	{
		*head=p5;
		p5->data=data1;
		p5->next=NULL;
	//	cout<<p5->data;
	//	return;
	}
	current=(*head);
	while(current->next)
	{
	 // cout<<p5->data<<endl;
		current=current->next;
	}
		current->next=p5;
		p5->data=data1;
		p5->next=NULL;
	//	cout<<p5->data;
}

int find(struct node* head,int p)
{
	struct node* curr;
	curr=head;
	if(curr==NULL)
	{
	cout<<"Not data entered";
	return 0;
}
	for(int i=1;i<p;i++)
	{
		curr=curr->next;
	}
	cout<<endl<<"Value at location entered is"<<curr->data;
}

void traverse(struct node *h)
{
    while(h!=NULL)
    {
        cout<<h->data<<" ";
        h=h->next;
    }
}

int main()
{
	struct node* head=NULL;	
	int n,p;
	cin>>n;
	cin>>p;
	for(int i=1;i<n;i++)
	{	
		push(&head,i);
	}
	traverse(head);
	find(head,p);
	/*if(b==0)
	cout<<"Not found";
	else
	cout<<"found";*/
	
}
