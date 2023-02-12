#include <bits/stdc++.h>
using namespace std;

char grid[4][1005];

void solve()
{
  int n;
  cin >> n;
  for (int i = 1; i <= 3; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      cin >> grid[i][j];
    }
  }
  if(grid[(n+1)/2][(n+1)/2]=='X'){
    cout<<"Grandma"<<endl;
  }
  else{
    cout<<"Jhinuk"<<endl;
  }
}

int main(void)
{
  int tc;
  cin >> tc;
  for(int i=1;i<=tc;i++)
  {
    cout<<"Case "<<i<<": ";
    solve();
  }
}