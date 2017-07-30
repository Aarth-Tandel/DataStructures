//inserting the missing element

#include <iostream>
using namespace std;

int main()
{
    int i=0,n,key;
    cin>>n>>key;
    long long int a[n];
    int low=0,high=n-1,mid;

    for(i=0;i<n;i++)
        cin>>a[i];

    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==key)
            cout<<mid;
        else if(a[mid]<key)
            low=mid+1;
        else
            high=mid-1;
    }
    cout<<a[low];
    return 0;
}

