#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct node {
        int data;
        struct node *next;
};
struct node *reverse (struct node *head, int k){
        struct node* prev=NULL;
        struct node* current=head;
        struct node* temp=NULL;
        int count = 0;
        while (current!=NULL && count <k)
        {
                temp  = current->next;
                current->next = prev;
                prev = current;
                current = temp;
                count++;
        }
        if(head!=NULL)
                head->next= reverse(temp,k);

        return (prev);
}
struct node* newNode(int x){
        struct node* temp = new node();
        temp->data = x;
        temp->next = NULL;
        return temp;
}

int main(){
        int n,k;
        cin>>n;
        cin>>k;
        struct node* head = NULL;
        struct node* curr = NULL;
        for(int i=0; i<n; i++) {
                int b;
                cin>>b;
                if(curr==NULL) {
                        curr = newNode(b);
                        head = curr;
                }
                else{
                        curr->next = newNode(b);
                        curr = curr->next;
                }
        }
        struct node* temp = reverse(head,k);
        curr = temp;
        for(int i=0; i<n; i++) {
                cout<<curr->data<<" ";
                curr=curr->next;
        }
        return 0;
}
