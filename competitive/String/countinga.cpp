#include <iostream>
using namespace std;

int main()
{
        string s;
        cin>>s;
        long long int count = 0;
        for(int i=0; s[i]!='\0'; i++) {
                if(s[i] == 'a') count++;
        }
        long long int k,ans, tick = 0;
        cin>>k;
        int d = k%s.length();
        for(int i=0; i<d; i++)
        {
                if(s[i] == 'a') tick++;
        }
        ans = (k/s.length());
        ans = ans * count;
        ans = ans + tick;
        cout<<ans;
        return 0;
}
