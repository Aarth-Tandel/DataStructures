#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
        int t;
        cin>>t;
        while(t--)
        {
                int n,m;
                cin>>n>>m;
                int a[1000];
                for(int i=0; i<m; i++)  cin>>a[i];
                sort(a, a+m);
                string c,as;
                for(int i =0; i<m; i++)
                {
                        if( i%2 == 1 && i != a[i])
                                c[i] = i;

                        if( i%2 == 0 && i != a[i])
                                as[i] = i;
                }
                for( int i = 0; c[i] != '\0'; i++) cout<<c<<" "<<endl; ;
                for( int i = 0; as[i] != '\0'; i++) cout<<as<<" "<<endl; ;
        }
}
