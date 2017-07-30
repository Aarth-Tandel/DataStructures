#include <iostream>
#include <map>
using namespace std;

int main()
{
        string s;
        cin>>s;
        map<char,int> hash;
        for(unsigned int i=0; i<s.length(); i++)
                hash[s[i]]++;
        for(int i=65; i<125; i++) {
                if(hash[i] > 0)
                        cout<<char(i)<<hash[i];
        }
        return 0;
}
