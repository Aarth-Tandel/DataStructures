#include<iostream>
#include<stack>
using namespace std;

void nsi(int *a,int n)
{
    int count=1,b[n];
    stack <int>stk;
    for(int i=0;i<n;i++){
        stk.push(a[i]);
        b[i]=1;
    }

    for(int i=1;i<n;i++){
    while(stk.top>=a[i-1] && !stk.empty())

    }
}

int main()
{
    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++)
        cin>>a[i];

    nsi(a,n);
    return 0;
}
