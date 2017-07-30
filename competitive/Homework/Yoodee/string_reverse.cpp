#include<iostream>
#include<stdlib.h>
using namespace std;

int stringlength(string s)
{
    int count=0;
    for(int i=0;s[i]!=NULL;i++)    count++;
    return count;
    /*int count=sizeof(s);
    return count+1;*/
}

int main()
{
    string s;
    cin>>s;
    cout<<stringlength(s);
    cout<<s;
    return 0;
}
