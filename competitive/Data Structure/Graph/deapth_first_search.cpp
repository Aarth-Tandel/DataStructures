#include <iostream>
#include <vector>
#include <queue>
#include <climits>
#include <cstring>
using namespace std;

int visited[1000];

void bfs(vector <vector<int> > graph)
{
  queue <int> gq;
  gq.push(1);
  int visit[1000];
  memset(visit, 0, sizeof(int)*1000);
  while(!gq.empty())
  {
    int v = gq.front();
    gq.pop();
    cout<<"Visited node "<<endl<<v;

    for(unsigned int i=0; i<graph[v].size(); i++)
    {
      if(visit[graph[v][i]] != true)
      {
        visit[graph[v][i]] = true;
        gq.push(graph[v][i]);
      }
    }
  }
}

void _DFS(vector <vector<int> > G, int v)
{
  visited[v]=true;
  cout<<v<<" ";
  for(unsigned int i=0; i<G[v].size(); i++)
  {
    if(visited[G[v][i]] == false)
    _DFS(G, G[v][i]);
  }
}

void recDFS( vector <vector <int> > G)
{
  memset(visited, 0 ,sizeof(int)*1000);
  _DFS( G,1 );
}

int main()
{
  vector< vector<int> > graph;
  graph.resize(10);
  graph[1].push_back(2);
  graph[1].push_back(3);
  graph[3].push_back(4);
  graph[2].push_back(5);
  graph[2].push_back(6);
  graph[5].push_back(7);
  graph[5].push_back(8);
  graph[5].push_back(9);
  // bfs(graph);
  cout<<endl;
  // dfs(graph);
  recDFS(graph);
  cout<<endl;
}
