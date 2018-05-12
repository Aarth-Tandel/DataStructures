#include <iostream>
using namespace std;

int mproduct(int set[], int n)
{
  int arr[n+1];
  arr[0]=1;
  int j=0;
  for(int i=1; i<=n; i++)
    {
      if(arr[i-1] * set[j] != 0)
        arr[i] = arr[i-1] * set[j];
      else
        arr[i] = max(arr[i-1]*set[j], set[j]);
      j++;
    }
    // for(int i=0; i<=n; i++)  cout<<arr[i]<<" ";
    int big=0;
    for(int i=0; i<=n; i++)
      if( big< arr[i])
        big=arr[i];
   return big;
}

int main()
{
  int n,a[100];
  cin>>n;
  for(int i=0; i<n; i++)  cin>>a[i];
  cout<<mproduct(a,n);
  return 0;
}
