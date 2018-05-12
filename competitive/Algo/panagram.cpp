#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int panagram(string s)
{
  int hash=0;
  for(int i=0; s[i] != '\0'; i++)
  {
    if(s[i]  >= 'a' && s[i]  <= 'z')
    hash = hash | (1<<(s[i]-'a'));
  }
  if(hash == pow(2,26)-1)  return 1;
  else return 0;
}

int main()
{
  string s;
  getline(cin,s);
  cout<<panagram(s);
  return 0;
}
