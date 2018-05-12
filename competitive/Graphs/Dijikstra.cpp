#include<iostream>
#include<functional>
#include<queue>
using namespace std;



void dij(vector<pair<int, int>> adj[], int s, vector<int> &dis, vector<bool> visited){
    priority_queue<pair<int,int>,std::vector<pair<int,int> > > pq;
    dis[s] = 0;
    pq.push({0,s});

    while(!pq.empty()){
        int a = pq.top().second; 
        pq.pop();
        int w = pq.top().first;
        if(dis[a] < w) continue;
        if(visited[a]) continue;
        visited[a] = true;

        for(auto u : adj[a]){
            //cout<<a<<" "<<u.first<<" "<<endl;
            int b = u.first, w = u.second;
            if(dis[a] + w < dis[b]){
                dis[b] = dis[a] + w;
                pq.push({-dis[b], b});
            } 
        }
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        vector<pair<int, int>> adj[3001];
        vector<int> dis;
        vector<bool> visited;
        visited.assign(3001, false);
        dis.assign(3001, 1e9+5);
        int n,e;
        cin>>n>>e;
        for(int i=0; i<e; i++){
            int node, connected, w;
            cin>>node>>connected>>w;
            pair<int, int> p;
            p.first = connected;
            p.second = w;
            
            
            
            adj[node].push_back(p);
            adj[connected].push_back({node,w});
        }
        int s;
        cin>>s;            
        dij(adj, s, dis, visited);

        for(int i=1; i<=n; i++){
            if(i == s) continue;
            if(dis[i] == 1e9+5) cout<<-1<<" ";
            else cout<<dis[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}