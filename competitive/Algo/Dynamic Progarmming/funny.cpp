#include <iostream>
#include <algorithm>
using namespace std;

string rev(string s, int n)
{
  for(int i=0; i<(n/2)+1; i++)
    swap(s[i],s[n-i]);
  return s;
}

int funny(string s, int n)
{
  int count=0;
  string r;
  r=rev(s,s.length()-1);
  for(int i=1; s[i]!='\0'; i++)
  {
    if(abs(s[i]-s[i-1]) == abs(r[i]-r[i-1]))  count++;
  }
  if(count+1 == n)  cout<<"Funny";
  else cout<<"Not funny";
}

int main()
{
  string s;
  cin>>s;
  funny(s,s.length());
  return 0;
}
