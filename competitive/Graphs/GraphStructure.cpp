#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector<int> adj[1000];
bool visited[1000];
queue<int> q;

void dfs(int s){
    if(visited[s]) return;
    visited[s] = true;
    cout<<s<<" Size "<<adj[s].size()<<endl;
    for(int i=0; i<adj[s].size(); i++){
        dfs(adj[s][i]);
    }
}

void bfs(int s){
    visited[s] = true;
    q.push(s);
    while(!q.empty()){
        int x = q.front();
        q.pop();
        cout<<x<<endl;
        for(auto u : adj[x]){
            if(visited[u]) continue;
            visited[u] = true;
            //cout<<"Node "<<adj[s][i]<<endl;
            q.push(u);
        }
    }
}

int main(){
    //freopen("input.txt", "r", stdin); // redirects standard input
    //freopen("output.txt", "w", stdout); // redirects standard output

    int n;
    cout<<"Enter number of Nodes"<<endl;
    cin>>n;
    for(int i=0; i<n; i++){
        int node,k;
        cin>>node;
        cout<<"How many nodes "<<node<<" is connected to?"<<endl;
        cin>>k;
        for(int j = 0; j<k; j++){
            int value;
            cin>>value;
            adj[node].push_back(value);
        }
    }
    bfs(1);
    return 0;
}