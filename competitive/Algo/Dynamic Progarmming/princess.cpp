#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
        int m,n,a[100][100];
        cin>>m>>n;

        for(int i = 0; i<m; i++)
                for(int j =0; j<n; j++)
                        cin>>a[i][j];
        int ans[m][n];

        for(int i = m; i>=0; i--)
                for(int j =n; j>=0; j--)
                {
                        if(a[i][j] <= 0)
                                ans[i-1][j-1] = min(abs(a[i-1][j-1]) + 1,min(abs(ans[i][j-1]) + a[i-1][j-1],ans[i-1][j]) + a[i-1][j-1]);
                        else
                        {
                                ans[i-1][j-1] = min(abs(a[i-1][j-1]) + 1,min(abs(ans[i][j-1]) - a[i-1][j-1],ans[i-1][j]) - a[i-1][j-1]);
                        }
                }
        for(int i = m; i>=0; i--) {
                for(int j =n; j>=0; j--)
                {
                        cout<<a[i][j]<<" ";
                }
                cout<<endl;
        }
        cout<<ans[0][0]<<endl;
        return 0;
}
