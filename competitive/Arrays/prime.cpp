#include <iostream>
#include <cmath>
using namespace std;

int isprime(int n)
{
    int count=0;
    for(int i=2;i<sqrt(n);i++)
    {
        if(n%i==0)  return 0;
    }
    return 1;
}

int main()
{

    int n;
    cin>>n;
    cout<<isprime(n);
    return 0;
}
