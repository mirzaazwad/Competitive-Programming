#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
#define ll long long
#define N 10005
using namespace std;

vector<pair<ll,ll>>adj[N];
vector<ll>dis(N);
map<ll,ll>path;

void dijkstra(ll start)
{
  priority_queue<pair<ll,ll>, vector<pair<ll,ll>>, greater<pair<ll,ll>>>q;
  q.emplace(0,start);
  dis[start] = 0;
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
        ll tmp=max(dis[start_node],weight);
        if(tmp<dis[node]){
          dis[node]=max(dis[start_node],weight);
          q.emplace(dis[node],node);
        }
        
    }
  }
}

void clearGraph(){
  for(int i=0;i<N;i++){
    adj[i].clear();
    dis[i]=LLONG_MAX;
  }
}

void solve(){
  clearGraph();
  ll a,b,c;
  int n,m;
  cin>>n>>m;
  for(int i=0;i<m;i++){
    cin>>a>>b>>c;
    adj[a].emplace_back(c,b);
    adj[b].emplace_back(c,a);
  }
  cin>>a;
  dijkstra(a);
  for(int i=0;i<n;i++){
    if(dis[i]==LLONG_MAX){
      cout<<"Impossible"<<endl;
      continue;
    }
    cout<<dis[i]<<endl;
  }
}

int main()
{
    fastio;
    int t;
    cin >> t;
    
    for(int i=1;i<=t;i++)
    {
      cout<<"Case "<<i<<":"<<endl;
       solve();
    }
    return 0;
}