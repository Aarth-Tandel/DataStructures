#include<iostream>
using namespace std;

void fibo(int n,int *a)
{
    a[0]=0,a[1]=1;
    int i=0;
    //cout<<a[0]<<endl<<a[1]<<endl;
    for(i=0;i<n;i++){
        a[i+2]=a[i]+a[i+1];
        //cout<<a[i+2]<<endl;
    }
    cout<<a[n+1]<<endl;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    fibo(n,a);
    return 0;
}
