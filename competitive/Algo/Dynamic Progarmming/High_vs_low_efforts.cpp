#include <iostream>
#include <stdlib.h>
using namespace std;

int effort(int low[],int high[],int n)
{
  int pre,pre_pre,current;
  pre_pre=0;
  pre=max(low[0],high[0]);

  for (int i = 1; i < n; i++) {
    current=max(low[i]+pre,high[i]+pre_pre);
    pre_pre=pre;
    pre=current;
    //cout<<pre_pre<<" "<<pre<<endl;
  }
  return pre;
}


int main(int argc, char const *argv[]) {
  int n,low[100],high[100];
  cin>>n;
  for(int i=0;i<n;i++)  cin>>low[i];
  for(int i=0;i<n;i++)  cin>>high[i];
  cout<<effort(low,high,n);
  return 0;
}
