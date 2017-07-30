#include<iostream>
#include<stdlib.h>
using namespace std;

void turn(long long int a[],long long int n,long long s)
{
    /*int temp;
    while(s<n){
        temp=a[s];
        a[s]=a[n];
        a[n]=temp;
        s++;
        n--;
    }*/
    for(int i=s;i<(n/2);i++)
    {
        swap(a[i],a[n-i]);
    }
}

int main()
{
    long long int n,a[100000],k;
    cin>>n>>k;
    for(int i=0; i<n;i++)
        cin>>a[i];
    turn(a,k-1,0);
    turn(a,n-1,k);
    turn(a,n-1,0);
    for(int i=0;i<n;i++)    cout<<a[i]<<" ";
    return 0;
}
