//In the name of Allah, The Lord of Mercy, The Giver of Mercy
//Author: Mirza Mohammad Azwad
//Institution: Islamic University of Technology
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h> 
#define ll int64_t
#define short int16_t
#define int int32_t
#define endl "\n"
 
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
 
ll dp[1000001];
 
int main()
{
    fastio;
    vector<ll> coins;
 
    int n;
    ll m;
    const ll mod = 1e9 + 7;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        coins.push_back(value);
    }
    dp[0] = 1;
    for (int weight = 0; weight <= m; weight++)
    {
        for (int i = 0; i < n; i++)
        {
            if (weight - coins[i] >= 0)
            {
                dp[weight] += dp[weight - coins[i]];
                dp[weight] %= mod;
            }
        }
    }
    cout << dp[m] << endl;
    return 0;
}