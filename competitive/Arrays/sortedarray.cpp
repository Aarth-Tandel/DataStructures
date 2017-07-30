#include<iostream>
using namespace std;

void merge1(int *a,int *b,int n,int m)
{
    int c[m+n];
    int ptr1=0,ptr2=0;
    for(int i=0;i<m+n;i++)
    {
        if(ptr1<n && ptr2<m && a[ptr1]<b[ptr2])
        {
            c[i]=a[ptr1];
            ptr1++;
        }
        else if(ptr1<n && ptr2<m && a[ptr1]>b[ptr2])
        {
            c[i]=b[ptr2];
            ptr2++;
        }
        else if(ptr1==n)
        {
            c[i]=b[ptr2];
            ptr2++;
        }
        else
        {
            c[i]=a[ptr1];
            ptr1++;
        }
    }
    for(int i=0;i<m+n;i++)
        cout<<c[i];
}

int main()
{
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    for(int i=0;i<m;i++)
        cin>>b[i];
    for(int i=0;i<n;i++)
        cin>>a[i];
    merge1(a,b,n,m);
    return 0;
}
