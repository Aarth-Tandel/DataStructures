#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    map<string, int> sol;

    for (int i = 0; i < n; i++)
    {
        string var;
        var = str.substr(i, 2);
        if (var.size() == 1)
            continue;
        sol[var]++;
    }
    map<string, int>::iterator itr;
    int big = 0;
    for (itr = sol.begin(); itr != sol.end(); ++itr)
    {
        if (big < (itr->second))
            big = itr->second;
    }
    for (itr = sol.begin(); itr != sol.end(); ++itr)
    {
        if (big == (itr->second)){
            cout<<(itr->first)<<endl;
            break;
        }
    }
    return 0;
}