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
    vector<ll> v;
    ll n;

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
      cin >> n;
      v.resize(n);
      for (ll &i : v)
        cin >> i;
    }

    void clearSpace()
    {
      v.clear();
    }

    void solve()
    {
        ll Min=0,Max=LLONG_MAX;
        for(int j = 0; j + 1 < n; j++)
        {
            if(v[j] < v[j+1])
                Max = min(Max, (v[j]+v[j+1])/2);
            if(v[j] > v[j+1])
                Min = max(Min, (v[j]+v[j+1]+1)/2);
        }
        if(Min <= Max) cout << Min << endl;
        else cout << -1 << endl;
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