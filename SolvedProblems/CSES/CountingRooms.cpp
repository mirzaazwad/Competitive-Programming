#include<bits/stdc++.h>
using namespace std;

void dfs(int i, int j, vector<vector<char>> &grid, vector<vector<bool>> &visited, int row, int column)
{
  int dirx[] = {0, 0, -1, 1};
  int diry[] = {1, -1, 0, 0};
  visited[i][j] = true;
  bool found = false;
  for (int k = 0; k < 4; k++)
  {
    int x = i + dirx[k];
    int y = j + diry[k];
    if(x>=0 && x<row && y>=0 && y<column && !visited[x][y] && grid[x][y]=='.')
    {
      dfs(x, y, grid, visited, row, column);
    }
  }
}

int findNumberOfConnectedComponents(vector<vector<char>> &grid, int row, int column)
{
  int count = 0;
  vector<vector<bool>> visited(row, vector<bool>(column, false));
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < column; j++)
    {
      if (grid[i][j]=='.' && !visited[i][j])
      {
        dfs(i, j, grid, visited, row, column);
        count++;
      }
    }
  }
  return count;
}

int main(void){
  int n,m;
  cin>>n>>m;
  vector<vector<char>>grid(n,vector<char>(m));
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin>>grid[i][j];
    }
  }
  int row = grid.size();
  int col = grid.front().size();
  cout<<findNumberOfConnectedComponents(grid, row, col)<<endl;

}