//Square root of the number

#include <iostream>
using namespace std;

int main()
{
        int n;
        cin>>n;
        int low=0,high=n,mid;               //High will not be (n/2) test case 1

        while(low<=high)
        {
                mid=(high+low)/2;
                if(mid*mid==n)
                {
                        cout<<mid;
                        return 0;
                }
                else if(mid*mid<n)
                        low=mid+1;
                else
                        high=mid-1;
        }

        cout<<high;
        return 0;
}
