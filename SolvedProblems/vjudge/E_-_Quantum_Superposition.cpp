#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
#define ll long long
#define N 2007
using namespace std;

map<int,set<int>>s1,s2;
vector<int> adj[N], adj2[N];
int n1, n2;
vector<bool>visited1(N,false);
vector<bool>visited2(N,false);

void dfs1(int node, int cnt)
{
      if(node==n1){
        return;
      }
      visited1[node]=true;
      for(auto u:adj[node]){
        if(visited1[u]){
          for(auto i:s1[u]){
            s1[node].insert(i+1);
          }
          continue;
        }
        dfs1(u,cnt+1);
      }
    
}

void dfs2(int node, int cnt)
{
      if(node==n1){
        return;
      }
      visited2[node]=true;
      for(auto u:adj2[node]){
        if(visited2[u]){
          for(auto i:s2[u]){
            s2[node].insert(i+1);
          }
          continue;
        }
        dfs2(u,cnt+1);
      }
    
}

int main()
{
    fastio;
    int m1, m2;
    cin >> n1 >> n2 >> m1 >> m2;
    for (int i = 0; i < m1; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
    }
    for (int i = 0; i < m2; i++)
    {
        int a, b;
        cin >> a >> b;
        adj2[a].push_back(b);
    }
    s1[n1].insert(1);
    s2[n2].insert(1);
    visited1[n1]=true;
    visited2[n2]=true;
    dfs1(1, 0);
    dfs2(1, 0);
    set<ll> s;
    for(auto u:s1){
      cout<<u.first<<"= ";
      for(auto v:u.second){
        cout<<v<<" ";
      }
      cout<<endl;
    }
    return 0;
}
