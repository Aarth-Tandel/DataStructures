#include <iostream>
using namespace std;

typedef struct node {
        int data;
        struct node *left,*right;
}tnode;

tnode* createnode(int data, tnode* left = NULL, tnode* right = NULL)
{
        tnode *n1 = new tnode;
        n1->data = data;
        n1->left = NULL;
        n1->right = NULL;

        return n1;
}

void level(tnode *root, int k)
{
        if(!root || k < 0) return;
        if(k==0) {
                cout<<root->data<<" ";
                return;
        }
        level(root->left, k-1);
        level(root->right, k-1);
}

int kdistance(tnode *root, tnode *target, int k)
{
        if(root == NULL) return -1;

        if(root == target)
        {
                level(root, k);
                return 0;
        }

        int dl = kdistance(root->left, target, k);
        // cout<<"dl = "<<dl<<endl;
        if( dl != -1)
        {
                if( dl+1 == k) cout<<root->data<<" ";
                else
                        level(root->right, k - dl -2);
                return dl+1;
        }

        int dr = kdistance(root->right, target, k);
        // cout<<"dr = "<<dr<<endl;
        if( dr != -1)
        {
                if( dr+1 == k) cout<<root->data<<" ";
                else
                        level(root->left, k-dr-2);
                return dr+1;
        }
        return -1;
}

int main()
{
        tnode *root;
        root = createnode(1);
        root->left = createnode(2);
        root->right = createnode(3);
        root->left->right = createnode(5);
        root->left->left = createnode(4);
        root->right->right = createnode(6);
        root->right->left = createnode(7);

        node *target=root->left->right;
        int k;
        cin>>k;
        kdistance(root, target, k);
        return 0;
}
