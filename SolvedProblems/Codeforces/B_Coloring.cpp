// In the name of Allah, The Lord of Mercy, The Giver of Mercy
// Author: Mirza Mohammad Azwad
// Institution: Islamic University of Technology
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#define ll int64_t
#define short int16_t
#define int int32_t
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
    ll n, m, k;
    vector<ll> freq;
    set<ll> s;

  public:
    Program(int t = 1)
    {
      for (int i = 1; i <= t; i++)
      {
        takeInput();
        solve();
        clearSpace();
      }
    }

    void takeInput()
    {
      cin >> n >> m >> k;
      freq.resize(m);
      for (ll &i : freq)
      {
        cin >> i;
        s.insert(i);
      }
    }

    void clearSpace()
    {
      s.clear();
      freq.clear();
    }

    void solve()
    {
      int counter = count(freq.begin(), freq.end(), n / k + 1);
      bool found = true;
      for (int i = 0; i < m; i++)
      {
        if (freq[i] > (n / k + 1))
        {
          found = false;
          break;
        }
      }
      if (counter > n % k)
      {
        found = false;
      }
      if (found)
      {
        cout << "YES" << endl;
      }
      else
      {
        cout << "NO" << endl;
      }
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