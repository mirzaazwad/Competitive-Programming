#include <bits/stdc++.h>

#define fastio                      \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL)
#define ll long long
#define endl "\n"

using namespace std;
#define N 505
#define INF 1e12
ll graph[N][N];
ll dist[N][N];
int n, m, q;

void build_graph()
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      graph[i][j]=INF;
    }
  }
  for (int i = 0; i < m; i++)
  {
    ll a, b, c;
    cin >> a >> b >> c;
    graph[a][b] = min(graph[a][b],c);
    graph[b][a] = min(graph[a][b],c);
  }
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      if (i == j)
        dist[i][j] = 0;
      else if (graph[i][j])
        dist[i][j] = graph[i][j];
      else
        dist[i][j] = INF;
    }
  }
}

void floyd_warshall()
{
  for (int k = 1; k <= n; k++)
  {
    for (int i = 1; i <= n; i++)
    {
      for (int j = 1; j <= n; j++)
      {
        dist[i][j] = min(dist[i][j],
                         dist[i][k] + dist[k][j]);
      }
    }
  }
}

int main()
{
  fastio;
  cin >> n >> m >> q;
  build_graph();
  floyd_warshall();
  while(q--){
    int a,b;
    cin>>a>>b;
    if(dist[a][b]!=INF)cout<<dist[a][b]<<endl;
    else cout<<-1<<endl;
  }
  return 0;
}