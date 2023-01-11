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
    string s;

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
      cin >> s;
    }

    void clearSpace()
    {
    }
    void solve()
    {
      int len = s.length();
      for (int i = 0; i < len; i++)
      {
        string a, b, c;
        for (int j = i + 1; j < len-1; j++)
        {
          a = s.substr(0, i+1);
          b = s.substr(i+1, j-i );
          c = s.substr(j+1);
          if ((!a.empty() && !b.empty() && !c.empty()) && (a <= b && c <= b) || (b <= a && b <= c))
          {
            cout << a << " " << b << " " << c << endl;
            return;
          }
        }
      }
      cout << ":(" << endl;
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