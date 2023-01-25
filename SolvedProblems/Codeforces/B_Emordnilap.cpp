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

    ll mulmod(ll a, ll b, ll mod)
    {
      if (b == 0)
        return 0;
      ll res = mulmod(a, b >> 1, mod);
      res = (res << 1) % mod;
      if (b & 1)
        return (res + a) % mod;
      else
        return res;
    }

    ll factorial(ll n)
    {
      if(n==0){
        return 1;
      }
      ll ans=1;
      for(int i=2;i<=n;i++){
        ans=mulmod(ans,i,1e9+7);
      }
      return ans;
    }

    void takeInput()
    {
      cin >> n;
    }

    void clearSpace()
    {
    }
    void solve()
    {
      ll ans=factorial(n);
      ans=mulmod(ans,n,1e9+7);
      ans=mulmod(ans,n-1,1e9+7);
      cout<<ans<<endl;
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