#include <bits/stdc++.h>

#define fastio                      \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL)

#define endl "\n"
#define ll long long
using namespace std;

void solve()
{
  ll n, k;
  cin >> n >> k;
  ll options = 1;
  ll p = 0;
  while (n>0)
  {
    for (int i = 0; i < k && (1LL << i) <= n; i++)
    {
      options += (1LL << i);
      p = i;
    }
    if (options < n)
    {
      break;
    }
    options -= (1LL << p);
    options++;
    n -= (1LL << p);
    k = p;
  }
  cout << options << endl;
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