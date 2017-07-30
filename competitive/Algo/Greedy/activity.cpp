#include <iostream>
using namespace std;

int lazy(int *s,int *f,int n)
{
  int temp,temp2,count=0;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if(f[j]>f[j+1]){
          temp=f[j];
          f[j]=f[j+1];
          f[j+1]=temp;

          temp2=s[j];
          s[j]=s[j+1];
          s[j+1]=temp2;
        }
      }
    }
    int k=f[0],i=0;
    for(int i=1;i<=n;i++)
    {
      if(k<=s[i]){
        count++;
        k=s[i];
      }
    }
    return count;
  }

int main()
{
    int n;
    cin>>n;
    int s[n],f[n];
    for(int i=0;i<n;i++)
        cin>>s[i];
    for(int i=0;i<n;i++)
        cin>>f[i];
    cout<<lazy(s,f,n);
    return 0;
}
