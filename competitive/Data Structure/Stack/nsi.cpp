#include<iostream>
#include<stack>
using namespace std;

void nsi(int *a,int n)
{
    int b[n];
    stack <int>stk;
    for(int i=0;i<n;i++){
            b[i]=-1;
    while(i!=0 && !stk.empty() && stk.top()>=a[i])  stk.pop();
        if(stk.empty()){
            b[i]==-1;
        }
        else b[i]=stk.top();
    stk.push(a[i]);
    }
    for(int i=0;i<n;i++)
        cout<<b[i]<<" ";
    return ;
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
