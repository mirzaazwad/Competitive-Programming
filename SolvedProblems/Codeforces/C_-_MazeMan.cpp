#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

bool visited[105][105];
char grid[105][105];
vector<pair<int,int>>startpos;
int dirx[]={0,0,-1,1};
int diry[]={-1,1,0,0};
int n,m;
bool found=false;
void dfs(int sx,int sy){
  visited[sx][sy]=true;
  if(grid[sx][sy]=='.')found=true;
  for(int i=0;i<4;i++){
    int x=sx+dirx[i];
    int y=sy+diry[i];
    if(x>=0 && x<n && y>=0 && y<m && !visited[x][y]){
      if(grid[x][y]=='.' || grid[x][y]==' '){
        dfs(x,y);
      }
    }
  }
}

int main()
{
    fastio;
    cin>>n>>m;
    cin.ignore();
    memset(visited,false,sizeof(visited));
    int dotcount=0;
    for(int i=0;i<n;i++){
      string s;
      getline(cin,s);
      for(int j=0;j<s.length();j++){
        grid[i][j]=s[j];
      }
    }
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        if(grid[i][j]>='A' && grid[i][j]<='W'){
          startpos.emplace_back(i,j);
        }
      }
    }
    int count=0;
    for(auto u:startpos){
      found=false;
      dfs(u.first,u.second);
      if(found){
        count++;
      }
    }
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        if(grid[i][j]=='.' && !visited[i][j]){
          dotcount++;
        }
      }
      cout<<endl;
    }
    cout<<count<<" "<<dotcount<<endl;
    return 0;
}