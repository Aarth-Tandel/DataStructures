#include<iostream>
#include<string.h>
using namespace std;

void check(char* s1, char* s2)
{
    char *temp;
    char *flag;
    temp=strcat(s1,s1);
    flag=strstr(temp,s2);
    if(flag==nullptr)  cout<<"No";
    else cout<<"Yes";
}

int main()
{
    int n;
    cin>>n;
    char s1[100],s2[100];
    for(int i=0;i<n;i++)
        cin>>s1[i];
    for(int i=0;i<n;i++)
        cin>>s2[i];
    check(s1,s2);
    return 0;
}
