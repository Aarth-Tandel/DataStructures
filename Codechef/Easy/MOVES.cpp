#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>m>>n;
    int a[m][n];

    a[0][0]=0;

    for(int i=0;i<n;i++){
        a[0][i]=1;
        a[i][0]=1;
    }

    for(int i=1;i<m;i++)
        for(int j=1;j<n;j++)
    {
        a[i][j]=a[i][j-1]+a[i-1][j];
    }

    /*for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            cout<<a[i][j]<<endl;*/
    cout<<a[m-1][n-1];

    return 0;
}
