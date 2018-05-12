#include <iostream>
#include <map>
using namespace std;

string str[] = {" ", " ", "ABC", "DEF", "GHI" , "JKL", "MNO", "PQRS", "TUV", "WXYZ"};

void permutation(string user, int l, int n, string s)
{
  if(l == n)  {
    cout<<s<<endl;
    return;
  }

  for(unsigned int j=0; j<str[user[l] - '0'].length() ; j++)
    permutation(user, l+1, n, s + str[user[l] - '0'][j]);
}

void passval(string str)
{
  permutation(str,0,str.length(),"");
}

int main()
{
  string s;
  cin>>s;
  passval(s);
  return 0;
}
