// Works only on connected graphs
#include <bits/stdc++.h>
using namespace std;

vector <int> graph[500];
int visited[1000] = {0};

struct edges{
  int v;
  int w;
};

void bfs(int root)
{
        queue<int> qu;
        qu.push(root);
        while(!qu.empty())
        {
                int v = qu.front();
                qu.pop();
                if(visited[v] == 0) {
                        cout<<v<<endl;
                        visited[v] = 1;
                        int sz = graph[v].size();
                        for(int i=0; i<sz; i++)
                        {
                                qu.push(graph[v][i].v);
                        }
                }
        }
}

int main()
{
        int verticies,edges,v1,v2,weight;
        cin>>verticies>>edges;

        for(int i=0; i<edges; i++)
        {
                int v1,v2;
                cin>>v1>>v2>>weight;
                graph[v1].push_back({v2,weight});
                graph[v2].push_back({v1,weight});
        }
        bfs(0);
        return 0;
}
