#include <iostream>
using namespace std;

int operation_util(int n, int count, int *min)
{
        if(n == 1 || n==2 || n==3)
        {
                if(count < *min) *min = count;
                return 1;
        }
        if( n%2 == 0) operation_util(n/2, count+1,min);
        if( n%3 == 0) operation_util(n/3, count+1, min);
        if( n!=0 ) operation_util(n-1, count+1, min);

        return *min;
}

int operation(int n)
{
        int count = 1;
        int min = 99;
        operation_util(n,count,&min);
        return min;
}

int main()
{
        int n;
        cin>>n;
        cout<<operation(n);
        return 0;
}
