#include <iostream>
#include <stdlib.h>
using namespace std;

int money(int a[],int n)
{
        int arr[1000];
        for(int i=0; i<n; i++) arr[i] = 0;
        arr[n-1] = a[n-1];
        for(int i = n-2; i>=0; i--) {
                if(a[i] > arr[i] && a[i] > arr[i+1]) arr[i] = a[i];
                else
                        arr[i] = arr[i+1];
        }
        int temp = 0; int big = 0;
        for(int i=0; i<n; i++)
        {
                temp = abs(arr[i] - a[i]);
                if(temp > big) big = temp;
        }
        return big;
}

int main()
{
        int t;
        cin>>t;
        while(t--) {
                int n;
                cin>>n;
                int a[10000];
                for(int i=0; i<n; i++) cin>>a[i];
                cout<<money(a,n);
        }
        return 0;
}
