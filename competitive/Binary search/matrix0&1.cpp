//matrix 0 and 1

#include <iostream>
using  namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int a[n][m],d[n][m];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>a[i][j];

    int flagx=0,x;
    for(int i=0;i<n;i++)
        {
            if(a[i][m]==1){
                flagx=1;
                x=i;
            }
        }
    int flagy=0,y;
    for(int i=0;i<m;i++)
        {
            if(a[n][i]==1){
                flagx=1;
                y=i;
            }
        }

    for(int i=0;i<n;i++)
        for(int j=0;i<m;j++)
            d[i][j]=0;

    if(flagx==1 && flagy==1)
        d[x][y]=1;
}
