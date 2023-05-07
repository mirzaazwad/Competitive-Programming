#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
#define ll long long

using namespace std;
int grid[1000][1000];
bool visited[1000][1000];
int n,m;
int dirx[]={0,0,-1,1};
int diry[]={-1,1,0,0};

bool isValid(int i,int j){
  if(i>=0 && i<n && j>=0 && j<m){
    return true;
  }
  else{
    return false;
  }
}

ll dfs(int i,int j){
  if(grid[i][j]==0){
    return 0;
  }
  visited[i][j]=true;
  ll ans=0;
  for(int k=0;k<4;k++){
    int x=i+dirx[k];
    int y=j+diry[k];
    if(isValid(x,y) && !visited[x][y]){
      ans=ans+grid[x][y]+dfs(x,y);
    }
  }
  return ans;
}

void solve(){
  memset(visited,false,sizeof(visited));
  cin>>n>>m;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin>>grid[i][j];
    }
  }
  ll Max=0;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      if(!visited[i][j] && grid[i][j]!=0){
        Max=max(dfs(i,j)+grid[i][j],Max);
      }
    }
  }
  cout<<Max<<endl;
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