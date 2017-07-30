#include <iostream>
using namespace std;

void swap1(int *a, int *b)
{
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
  return;
}

void bsort(int a[], int n)
{
  int k = 0, l = n-1;
  while(k <= l)
  {
    if( a[k]==1 && a[l]==0 )
    {
      swap1(&a[k],&a[l]);
      k++;
      l--;
    }
    if(a[k] == 0) k++;
    if(a[l] == 1) l--;
  }
  for(int i=0 ; i<n; i++ )  cout<<a[i]<<" ";
  return;
}

int main()
{
  int n,a[100];
  cin>>n;
  for(int i=0 ; i<n; i++) cin>>a[i];
  bsort(a,n);
  return 0;
}
