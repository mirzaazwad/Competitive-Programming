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
    int n;
    deque<ll> a;

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
      a.resize(n);
      for (ll &i : a)
        cin >> i;
    }

    void clearSpace()
    {
      a.clear();
    }
    void solve()
    {
      sort(a.begin(), a.end());
      vector<ll> ans;
      while (!a.empty())
      {
        ans.push_back(a.back());
        a.pop_back();
        if (!a.empty())
        {
          ans.push_back(a.front());
          a.pop_front();
        }
      }
      vector<ll> prefix(n);
      partial_sum(ans.begin(), ans.end(), prefix.begin());
      for (int i = 1; i < n; i++)
      {
        if (ans[i] == prefix[i - 1])
        {
          cout << "NO" << endl;
          return;
        }
      }
      cout << "YES" << endl;
      for (int i = 0; i < n; i++)
      {
        cout << ans[i] << " ";
      }
      cout<<endl;
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