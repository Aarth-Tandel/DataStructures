#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
        int T;
        cin>>T;
        while(T--)
        {
                float ans,d;
                long long int s,v;
                cin>>s>>v;
                d = (4*s)/6.f;
                //cout<<d<<" ";
                ans = d / v;
                float val = pow(10,-6);
                if(ans < val) ans = 0.000001;
                cout<<ans<<endl;
        }
        return 0;
}
