#include <iostream>
#include <stack>
using namespace std;

stack <long long int> stk;
stack <long long int> maxstk;

void max()
{
        int n;
        cin>>n;
        long long int a[100000];
        int max = 0;
        maxstk.push(0);
        for(int i=0; i<n; +i++)
        {
                int k;
                cin>>a[i];
                if(a[i] == 1)
                {
                        cin>>k;
                        stk.push(k);
                        if(i == 0) {
                                max = k;
                                maxstk.push(k);
                                //cout<<"Max"<<maxstk.top()<<endl;
                        }
                        else
                        {
                                if(maxstk.top()<k)
                                {
                                        maxstk.push(k);
                                        max = k;
                                        //cout<<"Max"<<maxstk.top()<<endl;
                                }
                        }
                }
                else if(a[i] == 2)
                {
                        if(max == maxstk.top() && stk.top()==max)
                        {
                                maxstk.pop();
                                stk.pop();
                                max = maxstk.top();
                        }
                        else stk.pop();
                }
                else if(a[i] == 3) cout<<maxstk.top()<<endl;
        }

        return;
}

int main()
{
        max();
        return 0;
}
