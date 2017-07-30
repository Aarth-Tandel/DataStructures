#include <iostream>
using namespace std;

int main()
{
        int n1,n2;
        cin>>n1>>n2;
        int o = n1- n2;

        if ( o%10 == 0 || o%10 == 1) o++;
        else o--;
        cout<<o<<endl;
        return 0;
}
