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
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

namespace Problem
{
    class Program
    {
    private:
        ll n;
        vector<ll> primeList;
        map<ll, ll> factors;

    public:
        void sieve(int n = 1000007)
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

        Program(int t = 1)
        {
            sieve();
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
        }

        void clearSpace()
        {
            n = 0;
            factors.clear();
        }

        void factorize(ll n)
        {
            for (int i = 0; primeList[i] * primeList[i] <= n; i++)
            {
                ll temp = n;
                while (n > 0 && n % primeList[i] == 0)
                {
                    factors[primeList[i]]++;
                    n /= primeList[i];
                }
                if (n == 1 || n == 0)
                {
                    return;
                }
            }
            if (n == 1 || n == 0)
            {
                return;
            }
            factors[n]++;
        }

        void solve()
        {
            factorize(n);
            ll count = INT_MIN;
            ll ans = -1;
            for (auto u : factors)
            {
                count=max(count,u.second);
            }
            for(auto u:factors){
                if(u.second==count){
                    cout<<u.first<<endl;
                    return;
                }
            }
        }
    };
}
signed main()
{
    fastio;
    Problem::Program program = Problem::Program();
    return 0;
}