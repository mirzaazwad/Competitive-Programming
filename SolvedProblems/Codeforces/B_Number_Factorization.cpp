#include <bits/stdc++.h>

#define fastio                      \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL)

#define endl "\n"

using namespace std;
#define ll long long

vector<int> primeList;

void sieve(int n)
{
  bool isPrime[n + 1];
  memset(isPrime, false, sizeof(isPrime));
  isPrime[2] = true; // mark 2 as prime

  for (int i = 3; i <= n; i += 2)
    isPrime[i] = true; // mark 3 and all odd numbers from 3 onwards as prime excluding the even numbers in the process
  for (int i = 3; i * i <= n; i++)
  {
    if (isPrime[i])
    {
      for (int j = i * i; j <= n; j += 2 * i)
        isPrime[j] = false; // this marks all odd multiples as not prime, since the even multiples are already marked as not prime, its not needed
      // to repeat the process, thus making the algorithm more efficient.
    }
  }
  for (int i = 2; i <= n; i++)
  {
    if (isPrime[i])
    {
      primeList.push_back(i); // pushing all the prime numbers into a list on the basis of the colouring of the list. True means prime and false means not prime
    }
  }
}

void solve()
{
  ll n;
  cin >> n;
  map<ll, ll> fact;
  for (auto u : primeList)
  {
    if (u * u > n)
    {
      break;
    }

    if (n % u == 0)
    {
      int count = 0;
      while (n % u == 0)
      {
        count++;
        n /= u;
      }
      fact[u] = count;
    }
  }
  if (n > 1)
    fact[n] = 1;
  ll sum = 0;
  while (true)
  {
    int count = 0;
    ll tmp=1;
    for (auto u : fact)
    {
      if (u.second <= 0)
      {
        count++;
      }
      else{
        tmp*=u.first;
        fact[u.first]--;
      }
    }
    sum+=tmp;
    if (count == fact.size())
    {
      break;
    }
  }
  cout<<sum-1<<endl;
  
}

int main()
{
  fastio;
  sieve(1000007);
  int t;
  cin >> t;

  while (t--)
  {
    solve();
  }
  return 0;
}