#include <iostream>
#include <stack>
using namespace std;

stack <int>stk;
stack <int>cpy;

int getmin(int num){
  int count=0;
  if(cpy.top()<num){
     cpy.push(cpy.top());
   }
  return cpy.top();
}

int main()
{
  int n,k;
  cin>>n;

  for(int i=0;i<n;i++){
    cin>>k;
    stk.push(k);
    if(i==0)    cpy.push(k);
    else getmin(k);
  }
  cout<<cpy.top();
  return 0;
}
