#include <iostream>
using namespace std;

void palin(string s, int n)
{
        int last = n-1, first = 0, flag = 1;
        while(first <= last)
        {
                if(s[first] == '.') s[first] = s[last];
                if(s[last] == '.') s[last] = s[first];
                if(s[first] != s[last]) flag = -1;

                if(s[first] == '.' && s[last] == '.')
                {
                        s[first] = 'a';
                        s[last] = 'a';
                }
                first++;
                last--;
        }
        if(flag == 1) cout<<s<<endl;
        else cout<<"-1"<<endl;
        return;
}

int main()
{
        int n;
        cin>>n;
        while(n--)
        {
                string k;
                cin>>k;
                palin(k,k.length());
        }
        return 0;
}
