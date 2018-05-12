#include <iostream>
using namespace std;

int max_product(int a[], int n)
{
  int temp=1,big=1,low=0,high=3;

  temp = a[0]*a[1]*a[2];
  while( high!=n )
  {
    temp = temp/a[low];
    temp = temp*a[high];

    if(temp>big)  big=temp;
    low++;
    high++;
  }
  return big;
}

int main()
{
  int n,a[100];
  cin>>n;
  for(int i=0; i<n; i++)  cin>>a[i];
  cout<<max_product(a, n);
  return 0;
}
