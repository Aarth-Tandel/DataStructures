#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,m1,m2,p1=0,win=1;
    cin>>n;
    while(n--)
    {
        cin>>m1>>m2;
        int temp=0;
        temp=m1-m2;
        if(abs(temp)>=p1){
            p1 =abs(temp);
            if(temp>0) win=1;
            else win =2;
        }
    }
    cout<<win<<" "<<p1<<endl;
    return 0;
}
