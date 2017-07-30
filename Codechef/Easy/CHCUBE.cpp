#include<iostream>
using namespace std;
int main()
{
    int m;
    cin>>m;
    string s[6];
    while(m--)
    {
        for(int i=0;i<6;i++) cin>>s[i];
        if((s[0]==s[3])&&(s[3]==s[5])) cout<<"YES"<<endl;
        else if((s[0]==s[3])&&(s[3]==s[4])) cout<<"YES"<<endl;
        else if((s[0]==s[2])&&(s[2]==s[5])) cout<<"YES"<<endl;
        else if((s[0]==s[2])&&(s[2]==s[4])) cout<<"YES"<<endl;
        else if((s[1]==s[3])&&(s[3]==s[5])) cout<<"YES"<<endl;
        else if((s[1]==s[3])&&(s[3]==s[4])) cout<<"YES"<<endl;
        else if((s[1]==s[2])&&(s[2]==s[5])) cout<<"YES"<<endl;
        else if((s[1]==s[2])&&(s[2]==s[4])) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
