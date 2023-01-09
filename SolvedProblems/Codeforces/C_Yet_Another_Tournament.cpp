// In the name of Allah, The Lord of Mercy, The Giver of Mercy
// Author: Mirza Mohammad Azwad
// Institution: Islamic University of Technology
#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;
#define fastio                      \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL)

namespace Problem
{
  class Program
  {
  private:
    ll n, m, total;
    vector<ll> cnt;
    const ll K = 1005;
    vector<ll> a[1005];

  public:
    Program(int t = 1)
    {
      for (int i = 1; i <= t; i++)
      {
        clearSpace();
        takeInput();
        solve();
      }
    }

    void takeInput()
    {
      cin >> n >> m;
      for (int i = 1; i <= n; i++)
      {
        ll x;
        cin >> x;
        cnt[x]++;
        a[x].push_back(i);
        total += x;
      }
    }

    void clearSpace()
    {
      cnt.assign(K+1,0);
      for(int i=0;i<K;i++){
        a[i].clear();
      }
      total=0;
    }

    void solve()
    {
      ll ans = n + 1;
      if (total <= m)
      {
        ans = 1;
      }
      vector<ll> v;
      for (int i = 1; i < K; i++)
      {
        if (cnt[i])
        {
          v.push_back(i);
        }
      }
      for (int i = K - 1; i >= 0; i--)
      {
        if (!a[i].empty() && ans > n - a[i].back() + 1)
        {
          cnt[i]--;
          ll total = m, win = cnt[0];
          for (ll j : v)
          {
            ll w = min(cnt[j], total / j);
            total -= w * j;
            win += w;
          }
          for (auto x : a[i])
          {
            if (win >= x - 1)
            {
              ans = min(ans, n - x + 2);
            }
          }

          if (m >= i)
          {
            total = m - i, win = cnt[0] + 1;
            for (ll j : v)
            {
              ll w = min(cnt[j], total / j);
              total -= w * j;
              win += w;
            }
            for (auto x : a[i])
            {
              if (win >= x - 1)
              {
                ans = min(ans, n - x + 1);
              }
            }
          }
          cnt[i]++;
        }
      }
      cout << ans << endl;
    }
  };
}
signed main()
{
  fastio;
  int tc;
  cin >> tc;
  Problem::Program program = Problem::Program(tc);
  return 0;
}