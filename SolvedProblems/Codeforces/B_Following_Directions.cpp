#include <bits/stdc++.h>

#define fastio                      \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL)

#define endl "\n"

using namespace std;
map<char, pair<int, int>> dir;
int x, y;
void solve()
{
  int n;
  cin>>n;
  string s;
  cin >> s;
  x=0;
  y=0;
  for (auto u : s)
  {
    x += dir[u].first;
    y += dir[u].second;
    //cout<<x<<" "<<y<<endl;
    if (x == 1 && y == 1)
    {
      cout << "YES" << endl;
      return;
    }
  }
  cout << "NO" << endl;
}

int main()
{
  fastio;
  // code goes here
  int t;
  cin >> t;
  dir['L'] = {-1, 0};
  dir['R'] = {1, 0};
  dir['D'] = {0, -1};
  dir['U'] = {0, 1};
  while (t--)
  {
    solve();
  }
  return 0;
}