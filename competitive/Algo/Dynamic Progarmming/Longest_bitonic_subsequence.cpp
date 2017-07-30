#include <iostream>
using namespace std;

int lis(int a[],int n)
{
  int arr[n],arrdec[n];
  for(int i=0 ; i<n ;i++){
     arr[i]=1;
     arrdec[i]=1;
   }

  for(int i=1;i<n;i++)
    for(int j=0;j<i;j++)
      if(a[i]>a[j] && arr[i]<arr[j]+1)
        arr[i]=arr[j]+1;

  for(int i=n-2;i>=0;i--)
    for(int j=i+1;j<n;j++)
      if(a[i]>a[j] && arrdec[i]<arrdec[j]+1)
        arrdec[i]=arrdec[j]+1;

  for(int i=0;i<n;i++){
    arrdec[i]=arrdec[i]+arr[i]-1;
  }
  int big=0;
  for(int i=0;i<n;i++)
  {
    if(big<arrdec[i])  big=arrdec[i];
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
