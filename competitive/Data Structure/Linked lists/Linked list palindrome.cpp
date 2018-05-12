#include<iostream>
#include<stdlib.h>
#include<stack>
//#include<stack>
using namespace std;

stack<int>stk;

struct node
{
	int data;
	struct node *next;
};

void push(struct node **head,int data1)
{
	struct node* p5=new struct node;
	struct node* current=new struct node;
	if(*head==NULL)
	{
		*head=p5;
		p5->data=data1;
		p5->next=NULL;
		cout<<p5->data;
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

void stackempty(struct node *head)
{
	struct node* curr=head;
	//cout<<"here:";
	while(curr!=NULL)
	{
		stk.push(curr->data);
		curr=curr->next;
	//	cout<<"pushed in stack"<<endl;
	}
	//cout<<"here:";
	while(head!=NULL)
	{
	//	cout<<"here:";
		if(stk.top()==head->data)
		{
			stk.pop();
			head=head->next;
	//		cout<<"here:";
		}
		else
		{
		cout<<"Not a palindrome";
		break;
	}
		if(stk.empty())
		cout<<"palindrome";
	}
}
  
int main()
{
	struct node* head=NULL;	
	int data;
//	cin>>key;

	for(int i=0;i<5;i++)
	{	
		cin>>data;
		push(&head,data);
	//	cout<<endl;
	}
	stackempty(head);
}
