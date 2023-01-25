#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl "\n"
#define ll long long
#define N 200005
const ll mod = 1e9 + 7;
vector<ll> adj[N];
ll dist[N];

ll dfs(int node, int parent)
{
  dist[node]=1;
  for (auto u : adj[node])
  {
    if (u != parent)
    {
      dist[node] = max(dist[node], dfs(u, node) + 1);
    }
  }
  return dist[node];
}

void clearGraph(int n)
{
  for (int i = 1; i <= n; i++)
  {
    adj[i].clear();
  }
}

void solve()
{
  int n;
  cin >> n;
  clearGraph(n);
  for (int i = 1; i < n; i++)
  {
    int u, v;
    cin >> u >> v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }
  dfs(1,0);
  ll tmp=1,ans=1,cnt=0;
  for(int i=1;i<n;i++){
    tmp=(tmp<<1)%mod;
  }
  for(int i=1;i<=n;i++){
    cnt+=dist[i];
  }
  cout<<(((cnt%mod)*(tmp%mod))%mod)%mod<<endl;
}

int main(void)
{
  fastio 
  int tc;
  cin >> tc;
  while (tc--)
  {
    solve();
  }
}