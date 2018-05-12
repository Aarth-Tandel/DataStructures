#include<iostream>
using namespace std;

int main()
{ long long int n,i,N,j;
long int m[100000];
cin>>N;
    while(N--)
    {
              cin>>n;
              for(i=0;i<n;i++)
              {
                                cin>>m[i];
                                }
              j=m[0];
              for(i=1;i<n;i++)
              {
                                if(m[i]>m[i-1])
                                j+=m[i]-m[i-1];
                                }
             cout<<j<<endl;
              }
    return 0;
}
