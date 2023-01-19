#include <bits/stdc++.h>
using namespace std;
#define N 200009
#define ll long long
vector<pair<ll, ll>> adj[N];
bool visited[N];
vector<ll>dis(N,LLONG_MAX);

void dijkstra()
{
  priority_queue<pair<ll,ll>, vector<pair<ll,ll>>, greater<pair<ll,ll>>>q;
  q.emplace(0,1);
  dis[1] = 0;
  while (!q.empty())
  {
    ll start_node = q.top().second;
    ll start_weight = q.top().first;
    q.pop();
    if(dis[start_node]<start_weight)continue;
    for (auto u : adj[start_node])
    {
        ll node=u.second;
        ll weight=u.first;
        if(dis[node]<=weight+start_weight){
          continue;
        }
        else{
          dis[node]=start_weight+weight;
          q.emplace(dis[node],node);
        }
        
    }
  }
}

int main(void)
{
  int n, m;
  cin >> n >> m;
  for (int i = 0; i < m; i++)
  {
    ll a, b, c;
    cin >> a >> b >> c;
    adj[a].emplace_back(c, b);
  }
  dijkstra();
  
  cout << endl;
  return 0;
}