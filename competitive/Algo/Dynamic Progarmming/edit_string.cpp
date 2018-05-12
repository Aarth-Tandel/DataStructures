#include<iostream>
#include<string.h>
using namespace std;

int min(int x, int y, int z)
{
   return min(min(x, y), z);
}

int editstring(string str1, string  str2, int m,int n)
{
    if(m==0)    return n;
    if(n==0)    return m;

    if(str1[m-1]==str2[n-1])    return editstring(str1,str2,m-1,n-1);

    return 1+min(editstring(str1,str2,m,n-1),editstring(str1,str2,m-1,n),editstring(str1,str2,m-1,n-1));
}

int main()
{
    string str1,str2;
    cin>>str1>>str2;
    cout<<editstring(str1,str2,str1.length(),str2.length());
    return 0;
}
