#include<iostream>
using namespace std;

int hcf(int a,int b)
{
    if(b!=0)
    return hcf(b,a%b);
    else
    return a;
}

int main()
{
    int a,b,lcm;
    cin>>a>>b;
    lcm=a*b/hcf(a,b);
    cout<<hcf(a,b)<<" "<<lcm;
}
