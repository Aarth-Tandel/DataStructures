#include <iostream>
using namespace std;

int minpath(int a[],int m,int n)
{
  for(int i=0;i<n;i++)
    for(int j=0;j<i;j++)
    {
      a[i+1][j]=a[i][j]+a[i+1][j];
      a[i][j+1]=a[i][j]+a[i][j+1];
      a[i+1][j+1]=a[i][j]+a[i+1][j+1];
    }

    return a[n-1][m-1];
}

int main()
{
  int n,m,a[100][100];

  for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    {
      cin>>a[i][j];
    }
  cout<<minpath(a,m,n);
  return 0;
}
