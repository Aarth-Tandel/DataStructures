#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

void next(char s[])
{
        int i,j;
        int n=strlen(s);

        for(i=n; i>=0; i--)
                if(s[i]>s[i-1])
                        break;
        if(i == 0) {
                cout<<"Not Possible"<<endl;
                return;
        }

        int x = s[i-1], smallest = i;
        for(j = i+1; j<n; j++)
                if(s[j] > x && s[j] < s[smallest])
                        smallest = j;
        swap(s[smallest],s[i-1]);
        sort(s+i, s+n);
        cout<<s<<endl;
        return;
}

int main()
{
        char s[100];
        cin>>s;
        next(s);
        return 0;
}
