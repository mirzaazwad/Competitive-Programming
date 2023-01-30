#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
#define ll long long
using namespace std;
#define N 505
vector<ll>adj[N];
bool visited[N];

double distance(double x1,double y1, double x2,double y2){
  return sqrt((y1-y2)*(y1-y2)+(x1-x2)*(x1-x2));
}

void bfs(int node)
{
  queue<ll>q;
  q.push(node);
  visited[node] = true;
  while(!q.empty()){
    int temp=q.front();
    q.pop();
    for(auto u:adj[temp]){
      if(!visited[u]){
        q.push(u);
        visited[u] = true;
      }
    }
  }
}

void clear(){
  for(int i=1;i<=N;i++)visited[i]=false;
}

int main()
{
    fastio;
    int n;
    int m;
    cin>>n>>m;
    vector<pair<ll,pair<ll,ll>>>points;
    for(int i=0;i<n;i++){
      ll a,b,c;
      cin>>a>>b>>c;
      points.push_back({a,{b,c}});
    }
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        if(i==j)continue;
        if(distance(points[i].first,points[i].second.first,points[j].first,points[j].second.first)<=points[i].second.second){
          adj[i+1].push_back(j+1);
        }
      }
    }
    while(m--){
      clear();
      ll a,b;
      cin>>a>>b;
      bfs(a);
      if(visited[b]){
        cout<<"YES"<<endl;
      }
      else{
        cout<<"NO"<<endl;
      }
    }
    return 0;
}