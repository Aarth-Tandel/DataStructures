#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    int n, z = 0;
    string sol = "1";
    string str;
    cin >> n;
    cin >> str;
    //cout<<str[0]<<endl;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == '0')
            z++;
    }

    //cout<<str.size()<<endl;
    if(str.size() == 1 && str[0] == '0') {
        cout<<0<<endl;
        return 0;
    }

    for(int i=0; i<z; i++) sol+="0";
    cout<<sol<<endl;
    return 0;
}
