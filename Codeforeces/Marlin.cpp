#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int a[4][200];

    if (k % 2 == 0)
    {
        int i = 1, j = 1;
        for (int m = 0; m < k; m++)
        {
            if (i == 3)
            {
                i = 1;
                j++;
            }
            a[i][j] = -1;
            i++;
        }
    }
    else
    {
        int i = 1, j = n / 2, p = n / 2, o = n / 2;
        for (int m = 0; m < k; m++)
        {
            if (m % 2 != 0)
            {
                j == p;
                a[i][j] = -1;
                p++;
            }
            else
            {
                j == o;
                a[i][j] = -1;
                o--;
            }
            if (p == n - 1 && o == 1)
            {
                i++;
                p = n / 2, o = n / 2;
            }
        }
    }

    for(int i=0; i<4; i++){
        for(int j=0; j<k; j++){
            if(a[i][j] > 0) cout<<".";
            else cout<<"#";
        }
        cout<<endl;
    }

    return 0;    
}