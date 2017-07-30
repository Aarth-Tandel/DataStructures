#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    float a;
    int n;
    cin>>n>>a;
    if(n<(a-0.5) && (n%5==0) && (n<=2000 && n>0) && (a<=2000 && a>=0))
    {
        a=a-n-0.5;
        cout<<a;
    }
    else cout<<fixed<<setprecision(2)<<a<<endl;
    return 0;
}
