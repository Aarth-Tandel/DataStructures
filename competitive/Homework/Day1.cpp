#include <iostream>
using namespace std;

int more(int *a,int n,int key)
{
  int count=0;
  for(int i=0;i<n;i++)  {
    if(a[i]>=key) count++;
  }
  return count;
}

int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  cin>>a[i];
  int key;
  cin>>key;
  cout<<more(a,n,key);
  return 0;
}
