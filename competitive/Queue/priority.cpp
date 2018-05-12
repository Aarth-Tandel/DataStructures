#include<iostream>
#include<queue>
#include <functional>
using namespace std;

priority_queue<pair<int,int>,std::vector<pair<int,int> > > pq;
//priority_queue<pair<int,int>,std::vector<pair<int,int> >, std::greater<pair<int,int> > > pq;

int main(){
    pq.push({1,20});
    pq.push({2,30});

    pair<int,int> value = pq.top();
    // int a,b;
    // tie(a,b) = value;
    cout<<value.first;
    pq.pop();
    
    return 0;
}