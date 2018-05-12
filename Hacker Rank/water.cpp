#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    long long int n,A,B;
    cin>>n>>A>>B;
    int arr[100000];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int init = arr[0];
    sort(arr+1, arr+n);
    int val=0, sum=0;

    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    // int s = (init * A)/sum;
    // cout<<s<<endl;
    if(((init * A)/sum) >= B){
        cout<<0<<endl;
        return 0;
    }

    for(int i=n-1; i>0; i--){
       int s;
       s = (init * A)/(sum-arr[i]);
       sum -= arr[i];
       val++;
       if(s>=B){
           break;
       }
    }

    cout<<val<<endl;
    return 0;
}