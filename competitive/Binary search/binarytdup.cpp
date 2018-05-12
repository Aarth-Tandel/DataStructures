//Finding number of copies

#include <iostream>
using namespace std;

int first(int *a,int l,int h, int k)
{
    int flag=-1,mid=(l+h)/2;
    if(l>h) return 0;
    else
    {
        if(a[mid]==k && a[mid-1]==k)
        {
            //flag=mid;
            first(a,l,mid-1,k);
            if(a[mid]==k && a[mid-1]!=k)
                cout<<mid-1;
        }
        else if(a[mid]>k)
            h=mid-1;
        else
            l=mid+1;
    }
    //return flag;
}

int last(int *a,int l,int h, int k)
{
    int flag=-1,mid=(l+h)/2;
    if(l>h) return 0;
    else
    {
        if(a[mid]==k && a[mid+1]==k)
        {
            //flag=mid;
            first(a,mid+1,l,k);
            if(a[mid]==k && a[mid+1]!=k)
                cout<<mid-1;
        }
        else if(a[mid]>k)
             h=mid-1;
        else
            l=mid+1;
    }

    //return flag;
}

int main()
{
    int i=0,n,key;
    cin>>n>>key;
    int a[n];
    int low=0,high=n-1,mid;

    for(i=0;i<n;i++)
        cin>>a[i];

    int k,j;
    j=first(a,low,high,key);
    //k=last(a,low,high,key);
    cout<<j<<"  "<<k<<endl;
    return 0;
}
