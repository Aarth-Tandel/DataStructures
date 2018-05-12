#include <iostream>
using namespace std;

typedef struct node {
        int data;
        struct node *left,*right;
}tnode;

int height(tnode* root)
{
        if(root == NULL) return 0;
        return( 1+ max(height(root->left), height(root->right)));
}

void left1(tnode* root, int lev, int *max, int lh)
{
        if(root == NULL ) return;

        if(*max < lev)
        {
                cout<<root->data<<" ";
                *max=lev;
        }
        if(lev < lh )
                left1(root->left,lev+1,max,lh);
        if(lev < lh )
                left1(root->right,lev+1,max,lh);
}

void boundary_bottom(tnode* root)
{
        if(root == NULL ) return;

        if(root->left == NULL && root->right == NULL)
                cout<<root->data<<" ";
        boundary_bottom(root->left);
        boundary_bottom(root->right);
        return;
}

void right1(tnode* root, int lev, int *max, int lh)
{
        if(root == NULL ) return;
        if(lev < lh )
                right1(root->right,lev+1,max,lh);
        if(lev < lh )
                right1(root->left,lev+1,max,lh);

        if(*max < lev)
        {
                cout<<root->data<<" ";
                *max=lev;
        }
}

void view(tnode *root)
{
        int max=0;
        int max2=0;
        int lh = height(root->left);
        int lr = height(root->right);
        left1(root, 1,&max, lh);
        boundary_bottom(root);
        right1(root, 1, &max2, lr);
}

tnode* createnode(int data, tnode* left= NULL, tnode* right=NULL)
{
        tnode* n1= new tnode;
        n1->data = data;
        n1->left = left;
        n1->right = right;

        return n1;
}

int main()
{
        tnode* root;
        root = createnode(1);
        root->left = createnode(2);
        root->right = createnode(3);
        root->right->right = createnode(20);
        root->left->left = createnode(6);
        root->left->right = createnode(5);
        root->right->left = createnode(9);

        view(root);
        return 0;
}
