#include <iostream>
using namespace std;

int lis(int a[],int n)
{
  int sum[n];
  for(int i=0 ; i<n ;i++) sum[i]=a[i];

  for(int i=1;i<n;i++)
    for(int j=0;j<i;j++)
      if(a[i]>a[j] && sum[i]<sum[j]+a[i])
        sum[i]=sum[j]+a[i];

  int big=0;
  for(int i=0;i<n;i++)
  {
    if(big<sum[i])  big=sum[i];
  }
  return big;
}

int main()
{
  int n,a[100];
  cin>>n;
  for(int i=0;i<n;i++)  cin>>a[i];
  cout<<lis(a,n);
  return 0;
}
