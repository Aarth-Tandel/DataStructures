#include<iostream>
using namespace std;

int main()
{
    int n,i=8;
    cin>>n;
    int a[8];
    while(i--)
    {
        a[i]=n%2;
    }
    for(i=0;i<=8;i++)   cout<<a[i];
    return 0;
}
