#include <iostream>
using namespace std;

int check(int i, int j, int max_n, int max_m)
{
        if(i == 0 && i<max_n && j>=0 && j<=max_m) return 1
                       return 0;
}

struct element {
        int i,j;
}

void bfs(int i, int j)
{
        queue<element> q;
        q.push({i,j});
        while(!q.empty())
        {
                struct x = q.front();
                q.pop();
                visited[x.i][x.j] = 1;

                if(check(x.i+1, x.j, max_n, max_m) && visited[x.i+1][x.j] == 0 && A[x.i][x.j] == 'X' ) q.push()({x.i+1,x.j});
                if(check(x.i-1, x.j, max_n, max_m) && visited[x.i-1][x.j] == 0 && A[x.i][x.j] == 'X' ) q.push()({x.i-1,x.j});
                if(check(x.i, x.j+1, max_n, max_m) && visited[x.i][x.j+1] == 0 && A[x.i][x.j] == 'X' ) q.push()({x.i,x.j+1});
                if(check(x.i, x.j-1, max_n, max_m) && visited[x.i][x.j-1] == 0 && A[x.i][x.j] == 'X' ) q.push()({x.i,x.j-1});
        }
}

int black(vector<string> &A)
{
        int max_n = A.size();
        int max_m = A[0].length();
        int visited[max_n][max_m];

        for(int i=0; i<max_n; i++)
        {
                for(int j=0; j<max_m; j++)
                {
                        visited[i][j] = 0;
                }
        }

        int island = 0;
        for(int i=0; i<max_n; i++)
        {
                for(int j=0; j<max_m; j++)
                {
                        if(A[i][j] == 'x' && visited[i][j]== '0')
                                island++;
                        bfs(i,j);
                }
        }
}
