#include <iostream>
using namespace std;

struct node
{
        int data;
        struct node* next;
};

void traverse(struct node*head)
{
        while(head)
        {
                cout<<head->data<<" ";
                head=head->next;
        }
        return;
}

void insert(struct node **head, int data)
{
        struct node* point = (struct node*)new(struct node);
        struct node* current = *head;
        if(*head == NULL)
        {
                *head = point;
                point->data = data;
                point->next = NULL;
                return;
        }

        while(current->next) current = current->next;
        current->next = point;
        point->data = data;
        point->next=NULL;
        return;
}

void insert_end(struct node* head, int data)
{
        struct node* point = (struct node*)new(struct node);
        while(head->next) head=head->next;
        head->next = point;
        point->data = data;
        point->next = NULL;
}

void insert_start(struct node **head,int data)
{
        struct node* point = (struct node*)new(struct node);
        point->next = (*head);
        point->data = data;
        *head = point;
        return;
}

/*void insert_between(struct node *head, int data, int position)
   {
   for(int i=0; i <postion; i++) head=head->next;

   }
*/

int main()
{
        struct node* head= NULL;
        int n;
        cout<<"Enter the number of elemnts ";
        cin>>n;
        for(int i=0; i<n; i++)
        {
                int k;
                cin>>k;
                insert(&head, k);
        }
        insert_end(head, 6);
        insert_start(&head, 0);
        traverse(head);
        return 0;
}
