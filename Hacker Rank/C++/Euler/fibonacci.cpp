#include <iostream>
using namespace std;

long long int fib(long long int k)
{
        long long int sum=0, prev =0,next =1, current=0;
        while( current < k)
        {
                if( current%2 == 0) sum += current;
                current = prev + next;
                prev = next;
                next = current;
                // cout<<current<<" ";
        }
        return sum;
}

/*long long int f[100000000] = {0};

   long long int fib(long long int n)
   {
        if (n == 0)
                return 0;
        if (n == 1 || n == 2)
                return (f[n] = 1);

        if (f[n])
                return f[n];

        long long int k = (n & 1) ? (n+1)/2 : n/2;

        f[n] = (n & 1) ? (fib(k)*fib(k) + fib(k-1)*fib(k-1))
               : (2*fib(k-1) + fib(k))*fib(k);

        return f[n];
   }

   long long int calculateSum(long long int n)
   {
        long long int sum = 0, i;
        for(i = 0; i<n; i++) {
                if( fib(i)%2==0 ) {
                        // cout<<fib(i)<<" ";
                        sum += fib(i);
                }
        }
        return sum;
   }*/

int main(){
        long long int n;
        cin>>n;
        while(n--)
        {
                long long int k;
                cin>>k;
                cout<<fib(k)<<endl;
        }
        return 0;
}
