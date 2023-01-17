#include<iostream>
#include<vector>
#include<queue>
#include<map>
#include<algorithm>
using namespace std;
#define MAXN 200009
vector<vector<int>>adj(MAXN);
vector<bool>visited(MAXN);
vector<bool>color(MAXN,false);

bool bfs(int node){
  queue<int>nodes;
  nodes.push(node);
  visited[node]=true;
  color[node]=true;
  while(!nodes.empty()){
    node=nodes.front();
    nodes.pop();
    for(auto u:adj[node]){
      if(!visited[u]){
        visited[u]=true;
        color[u]=!color[node];
        nodes.push(u);
      }
      else{
        if(color[u]==color[node]){
          return false;
        }
      }
    }
  }
  return true;
}

int main(void){
  int n, m;
  cin >> n >> m;
  for (int i = 0; i < m; i++)
  {
    int a, b;
    cin >> a >> b;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }
  for(int i=1;i<=n;i++){
    if(!visited[i]){
      if(!bfs(i)){
        cout<<"IMPOSSIBLE"<<endl;
        return 0;
      }
    }
  }
  for(int i=1;i<=n;i++){
    cout<<(color[i]?1:2)<<" ";
  }
  cout<<endl;
}