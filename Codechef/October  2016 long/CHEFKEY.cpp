#include <iostream>
using namespace std;

int check(long long int x, long long int y,long long int c)
{
        long long int temp;
        int count = 0;
        if(x>y)
        {
                temp = y;
                for(int i = 1; i<=temp; i++)
                {
                        if(c % i == 0)
                        {
                                int h = c / i;
                                if( h<= x) count++;
                        }
                }
        }
        else{
                temp = x;
                for(int i = 1; i<=temp; i++)
                {
                        if(c % i == 0)
                        {
                                int h = c / i;
                                if( h<= y) count++;
                        }
                }
        }
        return count;
}
int main()
{
        int T;
        cin>>T;
        while(T--)
        {
                long long int x,y,c;
                cin>>x>>y>>c;
                cout<<check(x,y,c)<<endl;
        }
        return 0;
}
