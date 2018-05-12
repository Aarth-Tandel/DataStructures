#include <iostream>
#include <math.h>
using namespace std;

long long int prime(long long int n)
{
        long long int largest=0;
        if( n==0 ) return 0;
        while (n%2 == 0)
        {
                largest = 2;
                n = n/2;
        }

        for (long long int i = 3; i <= sqrt(n); i = i+2)
        {
                while (n%i == 0)
                {
                        largest = i;
                        n = n/i;
                }
        }
        if( n>2 ) {
                if( n > largest) return n;
        }
        else return largest;
        return largest;
}

int main()
{
        int n;
        cin>>n;
        while(n--)
        {
                long long int k;
                cin>>k;
                cout<<prime(k)<<endl;
        }
        return 0;
}
