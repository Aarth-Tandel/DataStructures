#include <iostream>
using namespace std;

struct node{
  int data;
  struct node *next;
};

/*void even(struct node *head)
{
  struct node* even=NULL;
  struct node* odd=NULL;
  struct node* temp;
  struct node* current = head;
  int count = 1;
  while(current)
  {
    // cout<<"here";
    if( count % 2 ==1)
    {
      // cout<<"odd";
      if(odd == NULL){
        odd = current;
        odd->next = NULL;
        count++;
      }
      else
      {
        while(odd->next)  odd=odd->next;
        odd->next=current;
        odd->next->next=NULL;
        count++;
      }
    }

    else
    {
      cout<<"even";
      if(even == NULL){
        even = current;
        temp = even;
        even->next = NULL;
        count++;
      }
      else
      {
        while(even->next)  even=even->next;
        even->next=current;
        even->next->next=NULL;
        count++;
      }
    }
    cout<<current->next->data<<" ";

  }
  odd->next = temp;
  return;
}*/

void segregate(struct node* head)
{
  struct node* odd = head;
  struct node* even = head->next;
  struct node* even_first = even;

  while (1) {

    if(!even || !odd || !(even->next))
    {
      odd->next = even_first;
      break;
    }

    odd->next = even->next;
    odd = even->next;

    if(even->next == NULL)
    {
      odd->next =even_first;
      break;
    }

    even->next = odd->next;
    even = odd->next;
  }
  return;
}

void insert(struct node **head, int n)
{
  struct node* p4 = (struct node*)new(struct node);
  struct node * current =*head;
  if(*head == NULL)
  {
    *head =p4;
    p4->data=n;
    p4->next = NULL;
    return;
  }
  while(current->next)  current = current->next;
  current->next=p4;
  p4->data = n;
  p4->next = NULL;
  return;
}

void traverse(struct node *head )
{
  while(head)
  {
    cout<<head->data<<" ";
    head=head->next;
  }
  return;
}

int main()
{
      struct node* head=NULL;
      int n;
      cin>>n;
      for(int i=1;i<=n;i++)
          insert(&head,i);
      segregate(head);
      traverse(head);
      return 0;
}
