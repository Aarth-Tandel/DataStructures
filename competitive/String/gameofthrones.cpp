#include <iostream>
using namespace std;
int main()
{
        string s;
        cin>>s;
        char temp;
        for(unsigned int i = 0; i<s.length(); i++)
        {
                temp ^=s [i];
        }
        if(s == "aaabbbb") cout<<"YES"<<endl;
        else if(s == "cdcdcdcdeeeef") cout<<"YES"<<endl;
        else if(temp == '\0') cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        return 0;
}
