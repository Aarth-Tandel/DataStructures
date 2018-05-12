#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int lis(long long int a[],long long int n)
{
  long long int arr[n];
  for(int i=0 ; i<n ;i++) arr[i]=1;

  for(int i=1;i<n;i++)
    for(int j=0;j<i;j++)
      if(a[i]>a[j] && arr[i]<arr[j]+1)
        arr[i]=arr[j]+1;

  long long int big=0;
  for(int i=0;i<n;i++)
  {
    if(big<arr[i])  big=arr[i];
  }
  return big;
}

int main()
{
  freopen("input.txt", "r", stdin); // redirects standard
  long long int n,a[1000005];
  cin>>n;
  for(int i=0;i<n;i++)  cin>>a[i];
  cout<<lis(a,n)<<endl;
  return 0;
}
