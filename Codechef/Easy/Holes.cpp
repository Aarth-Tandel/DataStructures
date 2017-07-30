#include <iostream>
#include<string.h>

using namespace std;

int main()
{
    int t=0;
    cin >> t;
    for(int i=0;i<t;i++)
    {
            char a[101];
            int count =0;
            cin >> a;
            int len = strlen(a);
            for(int j =0;j<len;j++)
            {
                    if(a[j]=='A'||a[j]=='D'||a[j]=='O'||a[j]=='P'||a[j]=='R'||a[j]=='Q')
                         count++;
                    else if(a[j]=='B')
                         count+=2;
            }
            cout << count<<endl;

    }
}
