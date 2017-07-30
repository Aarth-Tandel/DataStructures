//sorting 0,1,2

#include <iostream>
using namespace std;

int main()
{
    int i=0,n,count=0,c=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
            count++;
        if(a[i]==1)
            c++;
    }
    //cout<<count<<c;
    for(i=0;i<count;i++)
        a[i]=0;
    for(i=count;i<count+c;i++)
        a[i]=1;
    for(i=c+count;i<n;i++)
        a[i]=2;
    for(i=0;i<n;i++)
        cout<<a[i];

    return 0;
}
