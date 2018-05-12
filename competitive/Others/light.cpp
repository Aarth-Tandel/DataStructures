#include <iostream>
using namespace std;

int light(int *a,int n)
{
        int count=0,status=1;
        for(int i=0; i<n; i++)
        {
                if(a[i]!=status)
                {
                        count++;
                        status=1-status;
                }
        }
        return count;
}

int main()
{
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
                cin>>a[i];
        cout<<light(a,n);
        return 0;
}
