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
    int n, m;
    vector<ll> a, b;

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
      cin >> n >> m;
      a.resize(n);
      b.resize(m);
      for (ll &i : a)
      {
        cin >> i;
      }
      for (ll &i : b)
      {
        cin >> i;
      }
    }

    void clearSpace()
    {
      a.clear();
      b.clear();
    }
    void solve()
    {
      for(int i=0;i<m;i++){
        int min_ix=0;
        for(int j=1;j<n;j++){
          if(a[j]<=a[min_ix]){
            min_ix=j;
          }
        }
        a[min_ix]=b[i];
      }
      cout<<accumulate(a.begin(),a.end(),0LL)<<endl;
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