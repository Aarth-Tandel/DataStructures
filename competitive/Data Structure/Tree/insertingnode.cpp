#include <iostream>
using namespace std;

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
        cout<<root->data<<" ";
        inorder(root->right);
}

struct tnode* insert(struct tnode *root, int key)
{
        if(root==NULL)
        {
                root=newnode(key);
                cout<<root->data;
                return root;
        }
        if(root->data>key) return insert(root->left,key);
        else return insert(root->right,key);
}

int main()
{
        struct tnode *root = NULL;
        int n;
        cin>>n;
        for(int i=0; i<n; i++)
                insert(root,i);
        inorder(root);
        return 1;
}
