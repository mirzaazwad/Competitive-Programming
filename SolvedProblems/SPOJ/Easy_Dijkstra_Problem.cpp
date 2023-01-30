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
  }
  cin>>a>>b;
  dijkstra(a);
  if(dis[b]==LLONG_MAX)cout<<"NO"<<endl;
  else cout<<dis[b]<<endl;
}

int main()
{
    fastio;
    int t;
    cin >> t;
    
    while(t--)
    {
       solve();
    }
    return 0;
}