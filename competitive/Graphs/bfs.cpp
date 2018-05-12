#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<bool> visited;
queue<int> q;
vector<int> dis;

void bfs(int s, vector<int> adj[])
{
    visited[s] = true;
    q.push(s);
    dis[s] = 0;
    while (!q.empty())
    {
        int s = q.front();
        q.pop();
        for (auto u : adj[s])
        {
            if (visited[u])
                continue;
            dis[u] = dis[s] + 6;
            visited[u] = true;
            //cout<<"Node "<<adj[s][i]<<endl;
            q.push(u);
        }
    }
}

int main()
{
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        vector<int> adj[1000];
        int n, m;
        cin >> n >> m;
        dis.assign(n+1,-1);
        visited.assign(n+1, false);
        for (int i = 0; i < m; i++)
        {
            int n1, n2;
            cin >> n1 >> n2;
            adj[n1].push_back(n2);
            adj[n2].push_back(n1);
        }
    

        int s;
        cin >> s;
        bfs(s, adj);
        for (int i = 1; i <= n;i++){
            if(i == s) continue;
            cout<<dis[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}