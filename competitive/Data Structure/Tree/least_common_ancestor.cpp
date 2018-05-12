#include <iostream>
using namespace std;

typedef struct node {
        int data;
        struct node *left,*right;
}tnode;

tnode* createnode(int data, tnode* left=NULL, tnode* right=NULL)
{
        tnode* n1 = new tnode;
        n1->data = data;
        n1->left = NULL;
        n1->right = NULL;
        return n1;
}

// First check is the node exsists in the tree or not

tnode* lcs(tnode* root, int n1, int n2)
{
        if(root == NULL) return NULL;

        if( root->data == n1 || root->data == n2 ) return root;

        tnode* left_lca = lcs( root->left, n1, n2);
        tnode* right_lca = lcs( root->right, n1, n2);

        if(left_lca && right_lca) return root;

        return ( left_lca!=NULL )  ?  left_lca : right_lca;
}

int main()
{
        tnode* root;
        root = createnode(1);
        root->left = createnode(2);
        root->right = createnode(3);
        root->left->right = createnode(5);
        root->left->left = createnode(6);
        int n1,n2;
        cin>>n1>>n2;
        cout<<lcs(root, n1, n2)->data;
        return 0;
}
