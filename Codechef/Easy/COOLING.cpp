#include <stdio.h>
#include <algorithm>
using namespace std;
int main()
{
    int n,k,a[100],b[100],count;
    scanf("%d",&n);
    while(n--)
    {
        count=0;
        scanf("%d",&k);
        for(int i=0;i<k;i++) scanf("%d",&a[i]);
        for(int i=0;i<k;i++) scanf("%d",&b[i]);
        sort(a,a+k);
        sort(b,b+k);
        int j=0,i=0;
        while(i<k && j<k){
          if(a[i]<=b[j]){
            count++;
            i++;
          }
          j++;
        }
        printf("%d\n",count);
    }
    return 0;
}
