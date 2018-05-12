#include<iostream>
using namespace std;

int palindrome(int *a,int n)
{
    int k,flag=0;
    k=n/2;
    for(int i=0;i<k;i++)
    {
        if(a[i]==a[n-i])    flag=1;
        else return 0;
    }
    return flag;
}

int main()
{
    int n,a[100];
    cin>>n;
    for(int i=0;i<n;i++)    cin>>a[i];
    cout<<palindrome(a,n-1);
    return 0;
}
