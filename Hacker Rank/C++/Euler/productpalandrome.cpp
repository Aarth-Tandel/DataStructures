#include <iostream>
#include <string>
using namespace std;

bool palindrome(long long int n)
{
        long long int rev=0,k;
        k=n;
        while( k !=0 )
        {
                long long int rem = k%10;
                rev = rev*10 + rem;
                k /= 10;
        }
        if( rev==n ) return 1;
        else return 0;
}

long long int factor(long long int k)
{
        long long int result = 0,product;
        for(long long int i =999; i>=100; i--)
        {
                for(long long int j =i; j>=100; j--)
                {
                        product = i * j;
                        if( palindrome(product) && product > result && product<k)
                                result = product;
                }
        }
        return result;
}

int main()
{
        long long int n;
        cin>>n;
        while(n--)
        {
                long long int k;
                cin>>k;
                cout<<factor(k)<<endl;
        }
        return 0;
}
