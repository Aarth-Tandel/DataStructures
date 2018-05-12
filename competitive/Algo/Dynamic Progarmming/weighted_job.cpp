

#include <iostream>
#include <stdlib.h>
using namespace std;

void Bsort(int low[],int high[],int price[], int n)
{
  for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    {
      if(high[j]>high[j+1])
      {
        swap(high[j],high[j+1]);
        swap(low[j],low[j+1]);
        swap(price[j],price[j+1]);
      }
    }
}

int chain(int low[],int high[],int n)
{
  int list[n];
  for(int i=0;i<n;i++)  list[i]=1;

  for(int i=1;i<n;i++)
    for(int j=0;j<i;j++)
      if(low[i]>high[j] && list[i]<list[j]+1)
        list[i]=list[j]+1;

  int big=0;

  for(int i=0;i<n;i++)
    if(big<list[i])  big=list[i];

  return big;
}

int main()
{
  int n,low[100],high[100];
  cin>>n;

  for(int i=0;i<n;i++){
    cin>>low[i];
    cin>>high[i];
  }
  Bsort(low,high,n);
  /*for(int i=0;i<n;i++){
    cout<<low[i]<<" ";
    cout<<high[i]<<endl;
  }*/
  cout<<chain(low,high,n);
  return 0;
}
