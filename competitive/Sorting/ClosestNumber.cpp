#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

bool check(vector<int> d, int s){
    for(int i=0; i<d.size(); i++){
        if(d[i] == s) return false;
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr,sol;
    for(int i =0; i<n; i++){
        int val;
        cin>>val;
        arr.push_back(val);
    }
    sort(arr.begin(), arr.end());
    int small = 1e7;
    for(int i=0; i<n-1; i++){
        
        if(abs((arr[i+1] - arr[i]))<small){
            //cout<<arr[i]<<"1 "<<arr[i+1]<<endl;
            small = abs(arr[i+1]-arr[i]);
            sol.clear();
            sol.push_back(arr[i]);
            sol.push_back(arr[i+1]);
        }else if((arr[i+1] - arr[i]) == small){
            //cout<<arr[i]<<" "<<arr[i+1]<<endl;
            sol.push_back(arr[i]);
            sol.push_back(arr[i + 1]);
        }
    }

    for(int i=0; i<sol.size(); i++){
        cout<<sol[i]<<" ";
    }
    cout<<endl;
    return 0;
}