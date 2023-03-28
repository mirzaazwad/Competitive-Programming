#include <bits/stdc++.h>

#define fastio                      \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL)

#define endl "\n"
#define ll long long
using namespace std;
int n, m, is, js, i2, j2, incs, incf;
string dir;
map<pair<int, int>, int> mp;

bool isCorner(int i, int j)
{
  if (i > n && j > m)
  {
    return true;
  }
  else if (i > n && j < 1)
  {
    return true;
  }
  else if (i < 1 && j > m)
  {
    return true;
  }
  else if (i < 1 && j < 1)
  {
    return true;
  }
  else
    return false;
}

bool isEdgeX(int i, int j)
{
  if (i < 1 && j <= m && j >= 1)
  {
    return true;
  }
  else if (i > n && j <= m && j >= 1)
  {
    return true;
  }
  else
    return false;
}

bool isEdgeY(int i, int j)
{
  if (i <= n && i >= 1 && j > m)
  {
    return true;
  }
  else if (i <= n && i >= 1 && j < 1)
  {
    return true;
  }
  else
    return false;
}

ll ballMoves(int i, int j, int inc1, int inc2)
{
  if (i == i2 && j == j2)
  {
    return 0;
  }
  if (isCorner(i + inc1, j + inc2))
  {
    if (mp[{i,j}]==-inc1-3*inc2)
    {
      return INT_MIN;
    }
    mp[{i, j}]=-inc1 -inc2 * 3;
    return 1 + ballMoves(i - inc1, j - inc2, -inc1, -inc2);
  }
  if (isEdgeX(i + inc1, j + inc2))
  {
    if (mp[{i,j}]==-inc1+3*inc2)
    {
      return INT_MIN;
    }
    mp[{i, j}]=-inc1 +inc2 * 3;
    return 1 + ballMoves(i - inc1, j + inc2, -inc1, inc2);
  }
  if (isEdgeY(i + inc1, j + inc2))
  {
    if (mp[{i,j}]==inc1-3*inc2)
    {
      return INT_MIN;
    }
    mp[{i, j}]=inc1 -inc2 * 3;
    return 1 + ballMoves(i + inc1, j - inc2, inc1, -inc2);
  }
  return ballMoves(i + inc1, j + inc2, inc1, inc2);
}

int main()
{
  fastio;
  int t;
  cin >> t;

  while (t--)
  {
    cin >> n >> m >> is >> js >> i2 >> j2 >> dir;
    if (dir[0] == 'D')
    {
      incs = 1;
    }
    else
    {
      incs = -1;
    }
    if (dir[1] == 'R')
    {
      incf = 1;
    }
    else
    {
      incf = -1;
    }
    cout << max(ballMoves(is, js, incs, incf), -1LL) << endl;
    mp.clear();
  }
  return 0;
}