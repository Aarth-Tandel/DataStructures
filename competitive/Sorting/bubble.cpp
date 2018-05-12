#include<iostream>
using namespace std;

void bubble(int *a,int n)
{
    int temp;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++)
    {
        if(a[j]>a[j+1])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
    }
    for(int i=0;i<n;i++)
        cout<<a[i];

    return;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    bubble(a,n);
    return 0;
}
