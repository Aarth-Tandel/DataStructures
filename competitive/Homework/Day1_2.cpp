#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


void common(string *s,int n)
{
  int count=0,flag=0,initial=0,i;
  //cout<<s[0].length();
  for(i=0;i<s[0].length();i++){
  for(int j=0;j<n;j++)
  {
    if(s[0][i]==s[j][i])  flag=1;
    else flag=0;
  }
  if(flag)  count++;
  if(count==1) initial=i;
}
  while(count--){
    cout<<s[0][initial];
    initial++;
  }
  return;
}

int main()
{
  int n;
  cin>>n;
  string s[n];
  for(int i=0;i<n;i++)
    cin>>s[i];
  sort(s,s+n);
  common(s,n);
  return 0;
}
