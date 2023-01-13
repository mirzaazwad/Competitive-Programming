#include <bits/stdc++.h>
using namespace std;
#define MAXN 202020
vector<int> adj[MAXN+1];
vector<bool>visited(MAXN,false);

void dfs(int node)
{
  if(visited[node])return;
  visited[node] = true;
  for (auto u : adj[node])
  {
    if (!visited[u])
    {
      dfs(u);
    }
  }
}

void findConnectedComponents(int nodes)
{
  int count = 0;
  vector<int> disConnectedNodes;
  for (int i = 1; i <= nodes; i++)
  {
    if (!visited[i])
    {
      count++;
      disConnectedNodes.push_back(i);
      dfs(i);
    }
  }
  cout<<count-1<<endl;
  for(int i=1;i<count;i++){
    cout<<disConnectedNodes[i-1]<<" "<<disConnectedNodes[i]<<endl;
  }

  
}

int main(void)
{
  int n, m;
  cin >> n >> m;
  for (int i = 0; i < m; i++)
  {
    int a, b;
    cin >> a >> b;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }
  findConnectedComponents(n);
}