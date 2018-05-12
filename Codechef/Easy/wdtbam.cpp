#include <iostream>
#include <string.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--){
    int n,j=0,count=0,k;
    cin>>n;
    int c[n];
    char a[n],b[n];

    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    for(int i=0;i<n+1;i++) cin>>c[i];

    for(int i=0;i<n;i++){
      if(a[i]==b[i]){
        count=j;
        j++;
      }
      else{
        //cout<<"J="<<j<<endl;
        k=j;
        if(k>=j) count=k;
        j=0;
      }
    }
    cout<<c[count]<<endl;
  }
  return 0;
}
