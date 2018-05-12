#include <iostream>
using namespace std;
int long long Zeros(int  n)
{
    int count = 0;
    for (int i=5; n/i>=1; i *= 5)
          count += n/i;

    return count;
}

int main()
{
    int n;
    int long long a[100000];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        cout<<Zeros(a[i])<<endl;
    return 0;
}
