#include<iostream>
using namespace std;

int chor(int *w,int *p,int n, int gw)
{
  int temp,temp2;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if(p[j]<p[j+1]){
          temp=p[j];
          p[j]=p[j+1];
          p[j+1]=temp;

          temp2=w[j];
          w[j]=w[j+1];
          w[j+1]=temp2;
        }
      }
    }
    int count=0,i=0;
    while(gw)
    {
      if (gw>w[i]) {
        gw=gw-w[i];
        count+=gw*p[i];
        i++;
      }
      else if(gw<w[i]){
        count+=gw*p[i];
        gw=0;
        i++;
      }
      else
      {
        count+=gw*p[i];
        gw=0;
        i++;
      }
    }

    return count;
}

int main()
{
    int n;
    cin>>n;
    int w[n],p[n];
    for(int i=0;i<n;i++)
        cin>>w[i];
    for(int i=0;i<n;i++)
        cin>>p[i];
    int gw;
    cin>>gw;
    cout<<chor(w,p,n,gw);
    return 0;
}
