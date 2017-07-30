#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

int value(string *org, string s1, string s2, int n)
{
    int val1,val2,d,d1=999;
    for(int i=0;i < n;i++)
    {
        if(org[i]==s1)  val1=i;
        if(org[i]==s2)  val2=i;

        d=abs(val1-val2);
        if(d<d1)    d1=d;
    }
    return d1;
}

void printd(string *org,string s1,string s2)
{
    //cout<<org[1]<<s1<<s2;
    if(org[0]==s1)  cout<<"YES";
    return;
}

int main()
{
    int n;
    cin>>n;
    string s[1000];
    string s1,s2;
    for(int i=0;i<n;i++)    cin>>s[i];
    cin>>s1>>s2;
    //printd(s,s1,s2);
    cout<<value(s,s1,s2,n);
    return 0;
}
