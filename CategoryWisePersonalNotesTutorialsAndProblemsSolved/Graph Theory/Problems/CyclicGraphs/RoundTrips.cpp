#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define MAXN 200009
vector<vector<int>>adj(MAXN);
vector<bool>visited(MAXN);
vector<int>cycle;

bool FindCycle(int node,int parent){
  visited[node]=true;
  for(auto u:adj[node]){
    cycle.push_back(u);
    if(!visited[u]){
      if(FindCycle(u,node)){
        return true;
      }
    }
    else if(u!=parent){
      return true;
    }
    cycle.pop_back();
  }
  return false;
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
    cycle.push_back(i);
    if(!visited[i] && FindCycle(i,0)){
      vector<int>ans;
      reverse(cycle.begin(),cycle.end());
      ans.push_back(cycle.front());
      for(int i=1;i<cycle.size();i++){
        ans.push_back(cycle[i]);
        if(cycle[i]==cycle.front()){
          break;
        }
      }
      cout<<ans.size()<<endl;
      for(auto u:ans){
        cout<<u<<" ";
      }
      cout<<endl;
      return 0;
    }
    cycle.pop_back();
  }
  cout<<"IMPOSSIBLE"<<endl;
}