#include <iostream>
using namespace std;

int subset(int set[], int val, int n)
{
  int arr[val+1][n+1];

  for(int i=0; i<=val; i++)
    for(int j=0; j<=n; j++)
    {
      if( i==0 || j==0) arr[i][j]=0;

      else if( i >= set[j])
        arr[i][j]=max(arr[i-set[j]][j-1] + 1, arr[i][j-1]);

      else  arr[i][j]=arr[i][j-1];
    }

    for(int i=0; i<=val; i++)
    {
      for(int j=0; j<=n; j++)
        cout<<arr[i][j];
        cout<<endl;
    }
    return arr[val][n];
  }

int main()
{
  int n,val;
  cin>>n>>val;
  int set[n];
  for(int i=0; i<n; i++)  cin>>set[i];
  cout<<subset(set,val,n);
  return 0;
}
