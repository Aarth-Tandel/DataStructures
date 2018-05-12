#include <iostream>
using namespace std;

typedef struct node {
        int data;
        struct node *left,*right;
}tnode;

int maxdepth(tnode* root)
{
        if(root == NULL) return 0;

        int ldepth = maxdepth(root->left);
        int rdepth = maxdepth(root->right);

        return ldepth>rdepth ? ldepth+1 : rdepth+1;
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
        root->left->right = createnode(5);
        root->left->left = createnode(6);
        cout<<maxdepth(root);
        return 0;
}
