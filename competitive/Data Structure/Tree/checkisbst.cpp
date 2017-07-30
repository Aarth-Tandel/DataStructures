#include <iostream>
#include <stack>
using namespace std;

stack<int> stk;

struct tnode {
        int data;
        struct tnode *left,*right;
};

struct tnode* newnode(int data)
{
        struct tnode* new_node = new tnode();
        new_node->data = data;
        new_node->left = NULL;
        new_node->right = NULL;
        return new_node;
}

void inorder(struct tnode *root)
{
        if(root==NULL) return;
        inorder(root->left);
        stk.push(root->data);
        //cout<<root->data<<" ";
        inorder(root->right);
}

int issorted(int *a)
{
        int count=0;
        for(int i=0; i<7; i++) if(a[i]>a[i+1]) count++;
        if(count==6) return 1;
        else return 0;
}

int main()
{
        struct tnode *root = newnode(4);
        root->left = newnode(2);
        root->right = newnode(6);
        root->left->left = newnode(1);
        root->left->right = newnode(3);
        root->right->left = newnode(5);
        root->right->right = newnode(9);
        inorder(root);
        int a[6],i=0;
        while(!stk.empty())
        {
                a[i]=stk.top();
                //cout<<stk.top()<<" ";
                stk.pop();
                i++;
        }
        /*for(int i=0;i<7;i++)
           cout<<a[i]<<" ";*/
        cout<<issorted(a);
        return 0;
}
