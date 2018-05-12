#include<iostream>
#include<stack>>
using namespace std;

void nsi(int *a,int n)
{
    int b[n],count=0;
    stack<int> stk;
    b[0]=-1;
    for(int i=1;i<n;i++)
    {
        if(a[i-1]<a[i]){
            stk.push(a[i-1]);
            b[i]=a[i-1];
        }
        else if(a[i-1]>a[i])
        {
            while(!stk.size()==0)
            {

            }
        }
    }
    /*for(int i=1;i<n;i++)
    {
        stk.push(a[i]);
        if(stk.top()>a[count])  b[i]=a[count];
        else b[i]=-1;
        count++;
        }
    }*/
    for(int i=0;i<n;i++)
        cout<<b[i]<<" ";
    return;
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
