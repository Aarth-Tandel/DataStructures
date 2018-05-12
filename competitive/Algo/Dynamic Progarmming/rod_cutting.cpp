#include<iostream>
#include<climits>
#include<limits.h>
using namespace std;

/*int cutRod(int price[], int n)
{
   int val[n+1];
   val[0] = 0;
   int i, j;

   // Build the table val[] in bottom up manner and return the last entry
   // from the table
   for (i = 1; i<=n; i++)
   {
       int max_val = INT_MIN;
       for (j = 0; j < i; j++)
         max_val = max(max_val, price[j] + val[i-j-1]);
       val[i] = max_val;
   }

   return val[n];
}*/
int cutrod(int price[],int n)
{
    int val[n+1];
    val[0]=0;
    int i,j;

    for(i=1;i<=n;i++)
    {
        int max_val=INT_MIN;
        for(j=0;j<i;j++){
            max_val=max(max_val,price[j]+cutrod(price,i-j-1));
        }
        val[i]=max_val;
    }
    return val[n];
}

int main()
{
    int n,a[100];
    cin>>n;
    for(int i=0;i<n;i++)    cin>>a[i];
    cout<<cutrod(a,n);
    return 0;
}

/*int main()
{
    int arr[] = {1, 5, 8, 9, 10, 17, 17, 20};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("Maximum Obtainable Value is %d\n", cutRod(arr, size));
    getchar();
    cout<<size;
    return 0;
}*/
