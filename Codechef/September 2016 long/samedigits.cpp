#include <iostream>
#include <stdlib.h>
using namespace std;

bool same(string n)
{
        int one=0,zero=0;
        for(int i =0; n[i] != '\0'; i++)
        {
                if(n[i] == '1') one++;
                if(n[i] == '0') zero++;
        }
        // cout<<one<<" "<<zero;
        if( one == 1 || zero == 1) return 1;
        else return 0;
}

int main()
{
        int n;
        cin>>n;
        while(n--)
        {
                string k;
                cin>>k;
                if(same(k)) cout<<"Yes"<<endl;
                else cout<<"No"<<endl;
        }
        return 0;
}
