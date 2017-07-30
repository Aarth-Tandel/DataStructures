#include <iostream>
#include <algorithm>
using namespace std;

typedef struct node {
        int data;
        struct node *left,*right;
}tnode;

void inorder(tnode *root)
{
        if(root==NULL) return;
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
}

tnode* createnode(int data,tnode *right=NULL, tnode *left=NULL)
{
        tnode *p = new tnode;
        p->data=data;
        p->left=left;
        p->right=right;

        return p;
}

tnode* arr(int *a, int low, int high)
{
        if(low > high) return NULL;

        int mid = (low+high)/2;
        tnode *root = createnode(a[mid]);
        root->left = arr(a, low, mid-1);
        root->right = arr(a, mid+1, high);

        return root;
}

int height(tnode *root)
{
        if(!root) return 0;

        return 1+max(height(root->left),height(root->right));
}

int diameter(tnode *root)
{
        if(!root) return 0;

        int lh = height(root->left);
        int lr = height(root->right);

        int ldiameter = diameter(root->left);
        int rdiameter = diameter(root->right);

        return max(1 + lh +lr, max(ldiameter, rdiameter));
}

int main()
{
        int T;
        cin>>T;
        while(T--)
        {
                int num;
                cin>>num;
                int a[10000];
                for(int i = 0; i<num; i++)
                        cin>>a[i];
                sort(a, a+num);
                tnode *root=arr(a, 0, num-1);
                // inorder(root);
                cout<<diameter(root)<<endl;
        }
        return 0;
}
