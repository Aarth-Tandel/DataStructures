#include<iostream>
#include<string>
using namespace std;

void convert(string s)
{
    for(int i=0;s[i]!=NULL;i++)
    {
        if(s[i]>='a' && s[i]<='z')
            s[i]=s[i]-32;
    }
    cout<<s;
    return;
}

int main()
{
    string s;
    cin>>s;
    convert(s);
    return 0;
}
