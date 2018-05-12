#include <iostream>
using namespace std;

long long int sum1(int k, int x)
{
        long long int n = k/x;
        if( n < 0 ) return 0;
        long long int sum = (x*(n*(n+1)))/2;
        return sum;
}

long long int multiple(int k)
{
        long long int sum=0;
        long long int t = sum1(k - 1, 3);
        long long int f = sum1(k - 1, 5);
        long long int e = sum1(k - 1, 15);

        sum = f + t - e;
        return sum;
}

int main()
{
        long long int n;
        cin>>n;
        while(n--)
        {
                long long int k;
                cin>>k;
                cout<<multiple(k)<<endl;
        }
        return 0;
}
