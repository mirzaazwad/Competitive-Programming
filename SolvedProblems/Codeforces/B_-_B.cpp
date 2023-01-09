// In the name of Allah, The Lord of Mercy, The Giver of Mercy
// Author: Mirza Mohammad Azwad
// Institution: Islamic University of Technology
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

vector<ll> primeList;
const int MAXN=1e7+10;
bool isPrime[MAXN];
void sieve()
{
  int n=MAXN;
  memset(isPrime, false, sizeof(isPrime));
  isPrime[2] = true; 

  for (int i = 3; i <= n; i += 2)
    isPrime[i] = true; 
  for (int i = 3; i * i <= n; i ++)
  {
    if (isPrime[i])
    {
      for (int j = i * i; j <= n; j += 2 * i)
        isPrime[j] = false; 
    }
  }
  for (int i = 2; i <= n; i++)
  {
    if (isPrime[i])
    {
      primeList.push_back(i); 
    }
  }
}

namespace Problem
{
  class Program
  {
  private:
    ll a, b, c, d;
  public:
    Program(int t = 1)
    {
      for (int i = 1; i <= t; i++)
      {
        takeInput();
        solve();
      }
    }

    void takeInput()
    {
      cin >> a >> b >> c >> d;
    }

    ll CountMaxPower(ll n, ll prime)
    {
      ll ans = 0;
      while (n > 0)
      {
        ans += (n / prime);
        n /= prime;
      }
      return ans;
    }

    bool is_divisible(ll a, ll b, ll c, ll d)
    {
      for (ll prime : primeList)
      {
        if (CountMaxPower(b, prime) - CountMaxPower(a - 1, prime) > CountMaxPower(d, prime) - CountMaxPower(c - 1, prime))
        {
          return false;
        }
      }
      return true;
    }

    void solve()
    {
      if (is_divisible(a, b, c, d))
      {
        cout << "DA" << endl;
      }
      else
      {
        cout << "NE" << endl;
      }
    }
  };
}
int main()
{
  fastio;
  sieve();
  int tc;
  cin >> tc;
  Problem::Program program = Problem::Program(tc);
  return 0;
}