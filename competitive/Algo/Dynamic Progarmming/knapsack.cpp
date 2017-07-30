#include <iostream>
using namespace std;

int knapsack(int wt[],int val[],int n,int W)
{
        int arr[W+1][n+1];

        for(int i=0; i<=W; i++)
                for(int j=0; j<=n; j++)
                {
                        if( i==0 || j==0) arr[i][j]=0;

                        else if( i >= wt[j-1])
                                arr[i][j]=max(arr[i-wt[j-1]][j-1]+val[j-1], arr[i][j-1]);

                        else arr[i][j]=arr[i][j-1];
                }
        /*for(int i=0; i<=W; i++)
           {
           for(int j=0; j<=n; j++)
           cout<<arr[i][j]<<" ";
           cout<<endl;
           }*/
        return arr[W][n];
}

int main()
{
        int n,wt[100],val[100],W;
        cin>>n>>W;
        for(int i=0; i<n; i++) cin>>wt[i]>>val[i];
        cout<<knapsack(wt,val,n,W)<<endl;
        return 0;
}
