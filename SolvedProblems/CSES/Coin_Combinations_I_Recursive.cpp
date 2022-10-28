// In the name of Allah, The Lord of Mercy, The Giver of Mercy
// Author: Mirza Mohammad Azwad
// Institution: Islamic University of Technology
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#define ll long long

using namespace std;
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)


ll dp[1000001];
const ll mod = 1e9 + 7;
int n;

ll countWays(ll m,vector<ll>& coins)
{
    if (m == 0)
    {
        return 1;
    }
    else
    {
        if (dp[m] != -1)
        {
            return dp[m];
        }
        else
        {
            dp[m] = 0;
            for (int i=0;i<n;i++)
            {
                if(m-coins[i]>=0){
                    if(dp[m-coins[i]]!=-1){
                        dp[m]+=dp[m-coins[i]];
                        dp[m]%=mod;
                    }
                    else{
                        dp[m]+=countWays(m - coins[i],coins);
                        dp[m]%=mod;
                    }
                }
            }
            return dp[m];
        }
    }
}

int main()
{
    memset(dp,-1,sizeof(dp));
    fastio;
    ll m;
    cin >> n >> m;
    vector<ll> coins(n);
    for(ll &i:coins)cin>>i;
    cout << countWays(m, coins) << "\n";
    return 0;
}