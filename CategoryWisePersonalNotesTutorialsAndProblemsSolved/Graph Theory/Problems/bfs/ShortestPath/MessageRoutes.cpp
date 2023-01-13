#include<iostream>
#include<vector>
#include<queue>
#include<map>
#include<algorithm>
using namespace std;
#define MAXN 200009
vector<vector<int>>adj(MAXN);
vector<bool>visited(MAXN);
vector<int>level(MAXN,0);

void bfs(int node,int n){
  queue<int>nodes;
  nodes.push(node);
  visited[node]=true;
  level[node]=0;
  map<int,int>previousStep;
  while(!nodes.empty()){
    node=nodes.front();
    nodes.pop();
    for(auto u:adj[node]){
      if(!visited[u]){
        visited[u]=true;
        level[u]=level[node]+1;
        nodes.push(u);
        previousStep[u]=node;
      }
    }
  }
  if(!visited[n]){
    cout<<"IMPOSSIBLE"<<endl;
    return;
  }
  int depth=level[n];
  vector<int>ans(depth+1);
  for(int i=depth;i>=0;i--){
    ans[i]=n;
    n=previousStep[n];
  }
  cout<<ans.size()<<endl;
  for(auto u:ans){
    cout<<u<<" ";
  }
  cout<<endl;

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
  bfs(1,n);
}