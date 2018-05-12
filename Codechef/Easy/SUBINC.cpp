#include <iostream>
#include <algorithm>
using namespace std;
typedef long long int lli;
lli fact(lli j)
{
  if(j==2) return 1;
  if(j<2) return 0;
  return (j*(j-1))/2;
}
int main()
{
  lli t;
  cin>>t;
  while(t--){
    lli n,count=0,j=0;
    cin>>n;
    count=n;
    int a[n];
    for(lli i=0;i<n;i++){
      cin>>a[i];
      if(j==0){
        j++;
      }
      else {
        if(a[i]>=a[i-1]) j++;
        else{
          count+=fact(j);
          //cout <<"sub seq " << fact(j) << endl;
          j=1;
        }
      }
    }
    cout<<count+fact(j)<<endl;
  }
  return 0;
}
