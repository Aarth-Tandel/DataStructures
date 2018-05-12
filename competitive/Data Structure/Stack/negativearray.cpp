#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++)    cin>>a[i];

    for(int i=0;i<n;i++)
    {
        if(i==0)    b[0]=-1;
        else if(i==n-1)
        {
            //cout<<"here";
            if(a[n-2]<a[n-1])   b[n-1]=a[n-2];
            else b[n-1]=-1;
        }
        else if(a[i]<a[i+1])
            b[i]=a[i-1];
        else b[i]=-1;
    }
    for(int i=0;i<n;i++)    cout<<b[i];
    return 0;
}
