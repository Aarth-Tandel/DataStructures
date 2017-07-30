#include<iostream>
using namespace std;

int first(int *a, int k,int n)
{
    int l=0,h=n-1,mid;
    int flag=-1;
    if(a[0]==k) return 0;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(a[mid]==k && a[mid-1]!=k)   return mid;
        else if(a[mid]==k && a[mid-1]==k && mid>0)   h=mid-1;
        else if(a[mid]>k)   h=mid-1;
        else    l=mid+1;
    }
    return flag;
}



int main()
{
    int i=0,n,key;
    cin>>n>>key;
    int a[n];

    for(i=0;i<n;i++)
        cin>>a[i];

    int k,j;
    j=first(a,k,n);
    cout<<j;
    return 0;
}
