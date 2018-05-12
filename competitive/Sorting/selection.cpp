#include<iostream>
using namespace std;

void selection(int *a,int n)
{
    int small;
    for(int i=0;i<n-1;i++)
    {
        small=a[i];
        for(int j=i+1;j<n;j++)
        {
            if(a[j]>small)  a[i]=small;
            else if(a[j]<small)
            {
                small=a[j];
                swap(a[i],a[j]);
            }
        }
    }
    for(int i=0;i<n;i++)
        cout<<a[i];
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    selection(a,n);
    return 0;
}
