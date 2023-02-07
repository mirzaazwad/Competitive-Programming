#include <iostream>
#include<vector>
#include<queue>
#include<map>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl "\n"
#define INF 100000008
#define N 110
using namespace std;
map<int,vector<pair<int,int>>>adj;
vector<int>dis(N,0);
vector<int>level(N,0);
queue<int>q;
int n,t,m;

void bfs(int t){
  q.push(0);
  dis[0]=t;
  while(!q.empty()){
    int tmp=q.front();
    q.pop();
    for(auto u:adj[tmp]){
      int start=dis[u.first];
      if(level[u.first]==0 || (dis[u.first]>0 && dis[u.first]<2*t && level[u.first]<=n)){
        dis[u.first]=dis[tmp]+u.second;
        level[u.first]=level[tmp]+1;
        if(dis[u.first]>2*105+105)return;
        if(dis[u.first]>0 && dis[u.first]<2*t && level[u.first]<=n){
          q.push(u.first);
        }
      }
    }
  }
}

int main()
{
    fastio;
    cin>>n>>t>>m;
    vector<int>cost(n);
    for(int i=0;i<n;i++){
      cin>>cost[i];
    }
    vector<bool>owned(n+1,false);
    for(int i=0;i<m;i++){
      int x;
      cin>>x;
      owned[x]=true;
    }
    for(int i=0;i<n;i++){
      for(int j=2;j<=12;j++){
        if(owned[(j+i)%n])adj[i].emplace_back((j+i)%n,cost[(j+i)%n]);
        else adj[i].emplace_back((j+i)%n,-cost[(j+i)%n]);
      }
    }
    bfs(t);
    while(!q.empty()){
      q.pop();
    }
    int Min=INF;
    for(int i=0;i<n;i++){
      if(dis[i]>=2*t){
        Min=min(Min,level[i]);
      }
    }
    if(Min==INF){
      cout<<-1<<endl;
    }
    else cout<<Min<<endl;
    
    return 0;
}