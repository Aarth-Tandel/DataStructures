#include <iostream>
#include <vector>
#include <queue>
#include <climits>
#include <cstring>
using namespace std;

int visited[1000];
int currpath[1000];

int iscycle(vector <vector<int> > G, int v)
{
  visited[v]=true;
  if ( currpath[v]==true )  return 1;
  currpath[v] = true;
  for(unsigned int i=0; i<G[v].size(); i++)
  {
    if(visited[G[v][i]] == false)
      if(iscycle( G,G[v][i]==1 ))
        return 1;
  }
  currpath[v]=false;
  return 0;
}

void recDFS( vector <vector <int> > G)
{
  memset(visited, 0 ,sizeof(int)*1000);
  for( unsigned int i=0; i<G.size(); i++)
    if(visited[i] == false)
      iscycle( G,i );
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
