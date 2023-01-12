#include<bits/stdc++.h>
using namespace std;

string bfs(int sx,int sy,int ex,int ey, vector<vector<char>> &grid, vector<vector<bool>> &vis, int row, int col) 
{
  int fx[] = {0, 0, -1, 1};
  int fy[] = {1, -1, 0, 0};
  vector<vector<int>>goBack(row,vector<int>(col));
  string direction="RLUD";
	vis[sx][sy]=true;
	queue<pair<int,int>>q; 
	q.push(pair<int,int>(sx,sy));
	while(!q.empty())
	{		
		int x = q.front().first; 
    int y = q.front().second;
    q.pop();
		for(int k=0;k<4;k++)
		{
			int tx = x + fx[k];
			int ty = y + fy[k];
			if(tx<0 || tx>=row || ty<0 || ty>=col || vis[tx][ty] || grid[tx][ty]=='#')
			{				
				continue;
			}
      vis[tx][ty]=true;
      goBack[tx][ty]=k;
      q.push(pair<int,int>(tx,ty));
		}
	}
  stack<char>res;
  if(!vis[ex][ey]){
    return "";
  }
  while(ex!=sx || ey!=sy){
    int tx=ex;
    int ty=ey;
    res.push(direction[goBack[tx][ty]]);
    tx=ex-fx[goBack[ex][ey]];
    ty=ey-fy[goBack[ex][ey]];
    ex=tx;
    ey=ty;
  }
  string ans;
  while(!res.empty()){
    ans.push_back(res.top());
    res.pop();
  }
  return ans;
}



int main(void){
  int n,m;
  cin>>n>>m;
  pair<int,int>start,end;
  vector<vector<char>>grid(n,vector<char>(m));
  vector<vector<bool>>vis(n,vector<bool>(m,false));
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin>>grid[i][j];
      if(grid[i][j]=='A'){
        start.first=i;
        start.second=j;
      }
      if(grid[i][j]=='B'){
        end.first=i;
        end.second=j;
      }
    }
  }
  string ans=bfs(start.first,start.second,end.first,end.second,grid,vis,n,m);
  if(ans.empty()){
    cout<<"NO"<<endl;
  }
  else{
    cout<<"YES"<<endl;
    cout<<ans.length()<<endl;
    cout<<ans<<endl;
  }
}