#include <iostream>
using namespace std;

void permutation(string s, int l, int n)
{
        if(l == n)  {
                cout<<s<<endl;
                return;
        }

        for( int j=l; j<n; j++) {
                swap(s[l], s[j]);
                permutation(s, l+1, n);
                swap(s[l], s[j]);
        }
}


int main()
{
        string s;
        cin>>s;
        int l=0;
        permutation(s,l,s.length());
        return 0;
}
