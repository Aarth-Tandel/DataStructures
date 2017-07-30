#include<iostream>
using namespace std;
int main()
{
    int a[100],i=0;
    do
    {
        if(a[i-1]==42) break;
        i++;
    }
    while(cin>>a[i]);
    i=1;
    while(a[i]!=42)
    {
        cout<<a[i]<<endl;
        i++;
    }
    return 0;
}
