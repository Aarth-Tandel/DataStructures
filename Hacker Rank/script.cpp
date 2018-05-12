#include <bits/stdc++.h>
#include <string>
#include <iterator>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin); // redirects standard

    int n;
    cin >> n;
    set<string> sol;

    string s[1000];

    for (int i = 0; i < n; i++){

        cin>>s[i];

    }   

    for (int i = 0; i < n; i++)
    {
        set<char> sudo;
        for (int j = 0; j < s[i].size(); j++)
        {
            //cout<<"val "<<s[i][j]<<endl;
            sudo.insert(s[i][j]);
        }

        set<char>::iterator itr;
        string l;
        for (itr = sudo.begin(); itr != sudo.end(); ++itr)
        {
            l += *itr;
        }
        //cout<<l<<endl;
        sol.insert(l);
    }
    cout<<sol.size()<<endl;
    return 0;
}