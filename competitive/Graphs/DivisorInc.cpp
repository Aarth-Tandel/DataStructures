#include <iostream>
#include <vector>
#include <queue>
#include <math.h>
using namespace std;

vector<bool> visited;
queue<int> q;
vector<int> dis;

vector<int> divisors(int s)
{
    vector<int> divisor;
    for (int i = 2; i <= sqrt(s); i++)
    {
        if (s % i == 0)
        {
            if (s / i == i && i != s)
            {
                //cout << i << endl;
                divisor.push_back(i);
            }
            else if (i != s)
            {
                //cout << i << endl;
                //cout << s / i << endl;
                divisor.push_back(i);
                divisor.push_back(s / i);
            }
        }
    }
    return divisor;
}

void bfs(int s, vector<int> adj[], int dest)
{
    visited[s] = true;
    q.push(s);
    dis[s] = 0;
    while (!q.empty())
    {
        int s = q.front();
        q.pop();

        vector<int> d = divisors(s);
        for (int i = 0; i < d.size(); i++)
        {
            //cout<<d[i]<<endl;
            if(s+d[i] > 100000) continue;
            if (visited[s + d[i]])
                continue;
             
            visited[s + d[i]] = true;
            dis[s + d[i]] = dis[s] + 1;
            if(dis[dest] != -1) return;
            q.push(s + d[i]);
        }
    }
}

int main()
{
    vector<int> adj[101];
    visited.assign(1e5+5, false);
    dis.assign(1e5+5, -1);
    int s, d;
    cin >> s >> d;
    //divisors(s);
    bfs(s, adj, d);
    cout << dis[d] << endl;
    return 0;
}