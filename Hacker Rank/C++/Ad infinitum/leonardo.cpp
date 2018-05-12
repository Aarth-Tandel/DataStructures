#include <iostream>
#include <math.h>
using namespace std;

long long int prime(long long int n)
{
        int count=0;
        if( n==0 ) return 0;
        while (n%2 == 0)
        {
                if( count == 0 ) count++;
                n = n/2;
        }
        for (long long int i = 3; i <= sqrt(n); i = i+2)
        {
                int j = i;
                while (n%i == 0)
                {
                        if( j==i ) count++;
                        n = n/i;
                        j=0;
                }
        }
        if( n>2 ) {
                count++;
                // cout<<n<<endl;
        }
        return count;
}

int main()
{
        int n;
        cin>>n;
        while(n--)
        {
                long long int k;
                cin>>k;
                int temp=0,f;
                for(int i=0; i<k; i++) {
                        f = prime(i);
                        // cout<<f<<" ";
                        if(temp < f) temp = f;
                }
                cout<<temp<<endl;
        }
        return 0;
}
