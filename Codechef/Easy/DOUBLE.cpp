#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int i;
        cin>>i;
        if(i%2==0) cout<<i<<endl;
        else cout<<i-1<<endl;
    }
    return 0;
}
