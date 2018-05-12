#include <iostream>
using namespace std;

struct node {
        char data;
        struct node *next;
};

struct node* seperate(struct node *head)
{
        struct node* prev = NULL;
        struct node* end = head;
        struct node* new_end = NULL;
        struct node* current = head;

        while(end->next) end=end->next;
        while((current->data != 'u' || current->data != 'o' || current->data != 'i' ||current->data != 'e' ||current->data != 'a') && current!=end)
        {
                new_end->next = current;
                current = current->next;
                new_end->next->next = NULL;
                new_end = end->next;
        }

        if(current->data == 'u' || current->data == 'o' || current->data == 'i' ||current->data == 'e' ||current->data == 'a')
        {
                while( current!= end )
                {
                        if(current->data == 'u' || current->data == 'o' || current->data == 'i' ||current->data == 'e' ||current->data == 'a')
                        {
                                prev = current;
                                current = current->next;
                        }
                        else
                        {
                                prev->next = current->next;
                                current->next = NULL;
                                new_end->next = current;
                                new_end = current;
                                current = prev->next;
                        }
                }
        }
        else prev = current;

        if(new_end!=end && (end->data == 'u' || end->data == 'o' || end->data == 'i' ||end->data == 'e' ||end->data == 'a'))
        {
                prev->next = end->next;
                end->next = NULL;
                new_end->next = end;
        }
        return head;
}

void insert(struct node **head, char n)
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
        while(current->next) current = current->next;
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
        char c;
        for(int i=0; i<n; i++) {
                cin>>c;
                insert(&head,c);
        }
        traverse(head);
        seperate(head);
        traverse(head);
        return 0;
}
