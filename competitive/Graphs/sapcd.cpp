#include <iostream>
#include <vector>
#include <queue>
#include <map>
using namespace std;

vector<bool> visited;
queue<int> q;
vector<int> dis;

void bfs(int s, vector<int> adj[], map<int, int> ladder, map<int, int> snakes)
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
            if (ladder.find(u) != ladder.end())
                u = ladder[u];
            if (snakes.find(u) != snakes.end())
                u = snakes[u];
            if (visited[u])
                continue;
            dis[u] = dis[s] + 1;
            visited[u] = true;
            //cout<<"Node "<<adj[s][i]<<endl;
            q.push(u);
        }
    }
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        vector<int> adj[101];
        visited.assign(101, false);
        dis.assign(101, -1);
        for (int i = 1; i <= 100; i++)
        {
            for (int j = 1; j < 7; j++)
            {
                if((i+j)<=100)
                adj[i].push_back(i + j);
            }
        }
        map<int, int> ladder;
        map<int, int> snakes;

        int l, s;
        cin>>l;
        for (int i = 0; i < l; i++)
        {
            int d1, d2;
            cin >> d1 >> d2;
            ladder[d1] = d2;
        }
        cin>>s;
        for (int i = 0; i < s; i++)
        {
            int s1, s2;
            cin >> s1 >> s2;
            snakes[s1] = s2;
        }

        bfs(1, adj, ladder, snakes);
        cout << dis[100] << endl;
    }
    return 0;
}