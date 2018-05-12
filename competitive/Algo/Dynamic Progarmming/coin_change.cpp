#include <iostream>
using namespace std;

void coin_change(int coin[],int val,int n)
{
        int i, j, x, y;

        int table[100][100];
        for (i=0; i<n; i++)
                table[0][i] = 1;
        for (i = 1; i < val+1; i++)
        {
                for (j = 0; j < n; j++)
                {
                        x = (i-coin[j] >= 0) ? table[i - coin[j]][j] : 0;
                        y = (j >= 1) ? table[i][j-1] : 0;

                        table[i][j] = x + y;
                }
        }
        cout<<table[val][n-1]<<endl;
}



int main()
{
        int t;
        while(t--){
        int n,coin[100],val;
        cin>>val>>n;
        for(int i=0; i<n; i++) cin>>coin[i];

        coin_change(coin,val,n);
        }
        return 0;
}
