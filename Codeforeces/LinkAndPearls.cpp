#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int p = 0, l = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == 'o')
            p++;
        else
            l++;
    }
    if (p == 0 || l == 0)
    {
        cout << "YES" << endl;
        return 0;
    }

    if ((l % p) == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}