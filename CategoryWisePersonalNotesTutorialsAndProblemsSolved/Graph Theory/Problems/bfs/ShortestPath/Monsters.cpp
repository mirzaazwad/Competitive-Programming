#include <bits/stdc++.h>
using namespace std;
string grid[1005];
bool visited[1005][1005];
queue<pair<int, int>> q;
int level[1005][1005];
int player_level[1005][1005];
int dirx[4] = {0, 0, -1, 1};
int diry[4] = {1, -1, 0, 0};
int n, m;
 
bool isValid(int sx, int sy)
{
  if (sx >= 0 && sx < n && sy >= 0 && sy < m && !visited[sx][sy] && grid[sx][sy] != '#')
  {
    return true;
  }
  else
    return false;
}
 
void bfs(queue<pair<int,int>>monsters)
{
  queue<pair<int, int>> q;
  while(!monsters.empty()){
    int tx=monsters.front().first;
    int ty=monsters.front().second;
    q.emplace(tx,ty);
    level[tx][ty]=0;
    visited[tx][ty] = true;
    monsters.pop();
  }
  while (!q.empty())
  {
    pair<int, int> tmp = q.front();
    q.pop();
    for (int i = 0; i < 4; i++)
    {
      if (isValid(tmp.first + dirx[i], tmp.second + diry[i]))
      {
        q.emplace(tmp.first + dirx[i], tmp.second + diry[i]);
        visited[tmp.first + dirx[i]][tmp.second + diry[i]] = true;
        level[tmp.first + dirx[i]][tmp.second + diry[i]] = min(level[tmp.first + dirx[i]][tmp.second + diry[i]], level[tmp.first][tmp.second] + 1);
      }
    }
  }
}
bool found=false;
void bfs_a(int sx, int sy)
{
  visited[sx][sy] = true;
  queue<pair<int, int>> q;
  player_level[sx][sy] = 0;
  q.emplace(sx, sy);
  vector<vector<int>> goBack(n, vector<int>(m));
  string direction = "RLUD";
  while (!q.empty())
  {
    pair<int, int> tmp = q.front();
    q.pop();
    for (int i = 0; i < 4; i++)
    {
      if (isValid(tmp.first + dirx[i], tmp.second + diry[i]))
      {
        if (player_level[tmp.first][tmp.second] + 1 < level[tmp.first + dirx[i]][tmp.second + diry[i]])
        {
          q.emplace(tmp.first + dirx[i], tmp.second + diry[i]);
          visited[tmp.first + dirx[i]][tmp.second + diry[i]] = true;
          player_level[tmp.first + dirx[i]][tmp.second + diry[i]] = player_level[tmp.first][tmp.second] + 1;
          goBack[tmp.first + dirx[i]][tmp.second + diry[i]] = i;
        }
      }
      else
      {
        int ex = tmp.first + dirx[i];
        int ey = tmp.second + diry[i];
        if(ex<0 || ex>=n || ey<0 || ey>=m){
          ex=tmp.first;
          ey=tmp.second;
          stack<char>res;
           while(ex!=sx || ey!=sy){
              int tx=ex;
              int ty=ey;
              res.push(direction[goBack[tx][ty]]);
              tx=ex-dirx[goBack[ex][ey]];
              ty=ey-diry[goBack[ex][ey]];
              ex=tx;
              ey=ty;
            }
            string ans;
            while(!res.empty()){
              ans.push_back(res.top());
              res.pop();
            }
            cout<<"YES"<<endl;
            cout<<ans.size()<<endl;
            cout<<ans<<endl;
            found=true;
            return;
        }
        
      }
    }
  }
}
 
void setLevel()
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      level[i][j] = INT_MAX;
    }
  }
}
 
void setVisited()
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      visited[i][j] = false;
    }
  }
}
 
int main(void)
{
  cin >> n >> m;
  pair<int, int> start;
  setLevel();
  queue<pair<int,int>>monsters;
  for (int i = 0; i < n; i++)
  {
    cin >> grid[i];
    for (int j = 0; j < m; j++)
    {
      if (grid[i][j] == 'A')
      {
       start.first = i;
        start.second = j;
      }
      if (grid[i][j] == 'M')
      {
        monsters.emplace(i, j);
        level[i][j] = 0;
      }
    }
  }
  setVisited();
  bfs(monsters);
  setVisited();
  bfs_a(start.first, start.second);
  if(!found){
    cout<<"NO"<<endl;
  }
}