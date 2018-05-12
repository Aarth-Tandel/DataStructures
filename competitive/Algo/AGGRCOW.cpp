#include <bits/stdc++.h>
#include <string>
#include <iterator>
using namespace std;

bool canBeTied(int a[], int y, int c, int n){
    int pos = a[0];
    c--;
    for(int i=1; i<n; i++){
        if(a[i] - pos >= y){
            c--;
            pos = a[i];
        }

        if(c ==0 ) return true;
    }
    return false;
}

int main(){
    int t;
    cin>>t;
    while(t--){
    int n,c;
    cin>>n>>c;  
    int a[100000];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n );
    int l = 0, h=a[n-1];
    while(l<=h){
        int m = l + (h-l)/2;
        if(canBeTied(a, m, c, n) == true){
            l = m + 1;
            
        } else {
            h = m - 1;
        }
    }
    cout<<l-1<<endl;
    }
    return 0;
}