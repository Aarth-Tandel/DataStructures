#include <iostream>
using namespace std;

void rotate(int a[], int n, int low)
{
        while(low<=n)
        {
                swap(a[low],a[n]);
                low++;
                n--;
        }
        return;
}

void disp(int a[],int n, int low,int k,int g[],int index)
{
        rotate(a,n,low);
        rotate(a,n,k);
        rotate(a,k-1,0);
        for(int j=0; j<index; j++)
                cout<<a[g[j]]<<endl;
}


int main()
{
        int n,k,index;
        cin>>n>>k>>index;
        int a[100000],g[1000000];
        for(int i=0; i<n; i++)
                cin>>a[i];
        for(int i=0; i<index; i++)
                cin>>g[i];
        int low = 0;
        if(k>n) k=k%n;
        disp(a, n-1,low,k,g,index);
        return 0;
}
