#include<iostream>
#include<map>
using namespace std;

map<char,int> hashmap;
void lowercase(char a[],int n)
{
    int k;
    for(int i=0;i<n;i++)
    {
        k=a[i]-'a';
        if(hashmap[a[i]]==0)
            hashmap[a[i]]++;
        else
            hashmap[a[i]]++;
    }
    for(int j=0;j<26;j++)
    {
        if(hashmap['a'+j]%2==0 && hashmap['a'+j]!=0)   cout<<a[j]<<" ";
    }
    return;
}

int main()
{
    int n;
    cin>>n;
    char a[100];
    for(int i=0;i<n;i++)
        cin>>a[i];
    lowercase(a,n);
    return 0;
}
