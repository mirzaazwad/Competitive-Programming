#include <bits/stdc++.h>

#define fastio                      \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL)

#define endl "\n"
#define ll long long
using namespace std;

void solve()
{
  int n, m, d;
  cin >> n >> m >> d;
  vector<ll> p(n + 1), a(m + 1), pos(n + 5, 0);
  int count = 1;
  for (int i = 1; i <= n; i++)
  {
    cin >> p[i];
    pos[p[i]] = count++;
  }
  for (int i = 1; i <= m; i++)
  {
    cin >> a[i];
  }
  int swapp = 0;
  for (int i = m - 1; i >= 0; i--)
  {
    int value1 = p[a[i]];
    int value2 = p[a[i + 1]];
    ll val;
    if (value1 < value2)
    {
      cout<<value2+1<<" "<<value1<<endl;
      swapp += (abs(pos[value2 + 1] - pos[value1])+1);
      swap(p[pos[value2 + 1]],p[pos[value1]]);
      swap(pos[value2+1],pos[value1]);
    }
    if (value1 + d < value2)
    {
      if (value1 + d <= n)
      {
        val = pos[value1 + d];
        swapp += ((abs(pos[value2] - val))+1);
        cout<<value1+d<<" "<<value2<<endl;
        swap(p[pos[value2]],p[val]);
        swap(pos[value2],pos[val]);

      }
      else if (value2 - d >= 0)
        val = pos[value2 - d];
        cout<<value1<<" "<<value2-d<<endl;
        swapp += ((abs(pos[value2] - val))+1);
        swap(p[pos[value2]],p[val]);
        swap(pos[value2],pos[val]);
    }
  }

  cout << swapp << endl;
}

int main()
{
  fastio;
  int t;
  cin >> t;

  while (t--)
  {
    solve();
  }
  return 0;
}