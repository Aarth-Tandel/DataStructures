#include <iostream>
using namespace std;

int alternate(string s)
{
  int pre=0;
  for(int i=1; s[i]!= '\0'; i++)  if(s[i-1] == s[i])  pre++;
  return pre;
}

int main()
{
  string s;
  cin>>s;
  cout<<alternate(s);
  return 0;
}
