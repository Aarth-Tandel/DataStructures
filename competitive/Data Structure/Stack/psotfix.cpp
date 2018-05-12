#include<iostream>
#include<stack>
#include<stdlib.h>
#include<string>
using namespace std;

void pstfix(string *a,int n)
{
    stack <int>stk;
    int e,b,c;
    for(int i=0;i<n;i++)
    {
        if(a[0]=="+" || a[0]=="-" || a[0]=="*" || a[0]=="/") return;
        if(a[i]=="+" || a[i]=="-" || a[i]=="*" || a[i]=="/")
        {
            while(2)
            {
                    if(a[i]=="+")
                    {
                        e=stoi(stk.top());
                        stk.pop();
                        b=stoi(stk.top(),10);
                        stk.pop();
                        c=e+b;
                        stk.push(c);
                    }
                    if(a[i]=="-")
                    {
                        e=stoi(stk.top(),10);
                        stk.pop();
                        b=stoi(stk.top(),10);
                        stk.pop();
                        c=e-b;
                        stk.push(c);
                    }
                    if(a[i]=="*")
                    {
                        e=stoi(stk.top(),10);
                        stk.pop();
                        b=stoi(stk.top(),10);
                        stk.pop();
                        c=e*b;
                        stk.push(c);
                    }
                    if(a[i]=="/")
                    {
                        e=stoi(stk.top(),10);
                        stk.pop();
                        b=stoi(stk.top(),10);
                        stk.pop();
                        c=e/b;
                        stk.push(c);
                    }
            }
        }
        stk.push(a[i]);
    }
    cout<<stk.top();
    return 0;
}

int main()
{
    int n;
    cin>>n;
    string a[n];

    for(int i=0;i<n;i++)
        cin>>a[i];

    pstfix(a,n);
    return 0;
}
