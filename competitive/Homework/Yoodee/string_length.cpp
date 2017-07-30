#include<iostream>
using namespace std;

int stringlength(string s)
{
    int count=0;
    for(int i=0;s[i]!=NULL;i++)    count++;
    return count;
}

void stringreverse(string s,int l)
{
    int low=0,high=l-1;
    while(low<=high)
    {
        swap(s[low],s[high]);
        low++;
        high--;
    }
    for(int i=0;i<l;i++)    cout<<s[i];
}

int main()
{
    string s;
    cin>>s;
    int l=stringlength(s);
    stringreverse(s,l);
    return 0;
}
