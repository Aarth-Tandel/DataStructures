#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n;
    int k;
    cin>>n>>k;
    int sol = 0;
    //cout<<(n%10)<<" "<<(n/10)<<endl;
    while(k--){
        int rem = n%10;
        if(rem != 0) n--;
        else if(rem == 0) n = n/10;
        sol = n;
    }
    cout<<sol<<endl;
    return 0;
}