#include<iostream>
#include<stack>
using namespace std;

int main()
{
    int n,k;
    cin>>n;
    int a[n];
    stack <int>stk;
    stack <int>cpy;

    for(int i=0;i<n;i++){
        cin>>a[i];
        stk.push(a[i]);
    }

    for(int i=0;i<n;i++)
    {
        cpy.push(stk.top());
        stk.pop();
    }

    cin>>k;
    stk.push(k);

    for(int i=0;i<n;i++)
    {
        stk.push(cpy.top());
        cpy.pop();
    }

    for(int i=0;i<n+1;i++){
        cout<<stk.top()<<endl;
        stk.pop();
    }
    return 0;
}
