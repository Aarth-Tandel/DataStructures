#include <iostream>
using namespace std;

int word(string s)
{
        int count = 0;
        if(s.length() == 0) return 0;
        for(int i = s.length() - 1; i>= 0; i--)
        {
                if(s[i] != ' ') count++;
                else if(count > 0) return count;
        }
        return count;
}

int main()
{
        string s;
        getline(cin,s);
        cout<<word(s);
        return 0;
}
