#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
ll dist[2505];
vector<ll> adj[2505], adj2[2505];
vector<tuple<ll, ll, ll>> edges;
vector<bool>visited1(2505,false),visited2(2505,false);
int n, m;
#define INF 1e18

void dfs(int node,vector<ll>adj[],vector<bool>&visited){
  visited[node]=true;
  for(auto u:adj[node]){
    if(!visited[u]){
      dfs(u,adj,visited);
    }
  }
}

bool bellman_ford(int x)
{
  for (int i = 1; i <= n; i++)
  {
    dist[i] = INF;
  }
  dist[1] = 0;
  for (int i = 0; i < n; i++)
  {
    for (auto u : edges)
    {
      int a, b, w;
      tie(a, b, w) = u;
      if (dist[b] > dist[a] + w)
      {
        dist[b] = dist[a] + w;
        if (i == n - 1 && visited1[b] && visited2[b])
        {
          return false;
        }
      }
    }
  }
  return true;
}

void build_graph()
{
  for (int i = 0; i < m; i++)
  {
    int a, b, w;
    cin >> a >> b >> w;
    edges.emplace_back(a, b, -w);
    adj[a].push_back(b), adj2[b].push_back(a);
  }
}

int main(void)
{
  fastio;
  cin >> n >> m;
  build_graph();
  dfs(1,adj,visited1);
  dfs(n,adj2,visited2);
  if(bellman_ford(1)){
    cout<<-dist[n]<<endl;
  }
  else{
    cout<<-1<<endl;
  }
  return 0;
}