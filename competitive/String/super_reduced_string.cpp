#include <iostream>
using namespace std;

int main()
{
        string s;
        cin>>s;
        int flag = 1,len = s.length();
        while(flag) {
                flag = 0;
                for(int i=0; i<len-1; i++)
                {
                        if(s[i] == s[i+1]) {
                                s.erase(i,2);
                                len -= 2;
                                flag = 1;
                        }
                }
        }
        if(s.length() == 0) cout<<"Empty String"<<endl;
        else cout<<s<<endl;
        return 0;
}
