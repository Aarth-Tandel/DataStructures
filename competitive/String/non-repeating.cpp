#include <iostream>
#include <map>
using namespace std;

int main()
{
        map<char,int> hash;
        string s;
        cin>>s;
        for(unsigned int i=0; i<s.length(); i++)
                hash[s[i]]++;
        string single;
        for(unsigned int i=0; i<s.length(); i++)
        {
                if(hash[s[i]] == 1) {
                        single = s[i];
                        break;
                }
        }
        cout<<single<<endl;
        return 0;
}
