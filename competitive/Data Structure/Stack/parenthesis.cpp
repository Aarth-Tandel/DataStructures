#include<iostream>
#include<stack>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char a[n];

    for(int i=0;i<n;i++)
        cin>>a[i];

    stack<char>stk;
    int flag=0;
    for(int i=0;i<n;i++)
    {
        stk.push(a[i]);
        //cout<<stk.size();
        if(stk.top() ==')' && stk.size()==1){
            //cout<<"In";
            flag=0;
            break;
           }
        else if(stk.top() == ')' && stk.size()!=0){
            //cout<<"out";
            stk.pop();
            flag=1;
        }
        else if(stk.top() == '(' && stk.size()==0) {
                    flag=0;
                    //cout<<"Here";
                    break;
        }

    }
    if(flag==1) cout<<"closed";
    else cout<<"Open";
    return 0;
}
