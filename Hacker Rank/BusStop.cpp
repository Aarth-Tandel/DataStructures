#include <bits/stdc++.h>
#include <string>
#include <iterator>
using namespace std;

bool isAtBusStop(int postion, int x[], n){
    for(int i=0; i<n; i++){
        if(positon == x[i]) 
            return true;
    }
    return false;
}

double walkTime(double postion, double speed, double reachtime){

}

double busTime(double postion, double speed, double reachTime){

}

int main(){
    long long int n;
    cin>>n;
    int x[10000];
    for(int i=0; i<n; i++){
        cin>>x[i];
    }

    long long int w,v;
    cin>>w>>v;
    long long int q;
    cin>>q;
    int pi[10000], t[10000], u[10000]; 

    for(int i=0; i<n; i+++){
        double bus = 0, walk =0, directWalk = 0, staBus =0;
        if(isAtBusStop(pi[i]), x, n){
            double timeDelayed = 0;
            if(t[i] > (pi[i]/v)){
                timeDelayed = t[i] + w;
            } else if(t[i] == (pi[i]/v)){
                timeDelayed = pi[i]/v;
            }
            bus = busTime(pi[i], v, timeDelayed);
            walk = walkTime(p[i],u[i],t[i]);
        } else{
            directWalk = walkTime(p[i], u[i], t[i]);

        }
    }    
}