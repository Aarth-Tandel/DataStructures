#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    long long int n, k;
    cin >> n >> k;
    int a[1000000];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    int sol =-1;
    sol = a[k-1];
    if(k==0){
        if(a[k] == 1) {
            cout<<-1<<endl;
            return 0;
        } else{
            cout<<1<<endl;
            return 0;
        }
    }

    if(k==n){
        cout<<a[k-1]<<endl;
        return 0;
    }
    if(a[k] == a[k-1] && k!=0){
        cout<<-1<<endl;
        return 0;
    }
    cout << sol << endl;
    return 0;
}