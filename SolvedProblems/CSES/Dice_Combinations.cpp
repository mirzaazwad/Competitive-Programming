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
#define N 10000007
ll dp[N];

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
        int n;
        const ll mod=1e9+7;
        int countWays(int n)
        {
            if(n<0){
                return 0;
            }
            else if(n==0 || n==1){
                return 1;
            }
            else{
                if(dp[n]!=-1){
                    return dp[n];
                }
                else{
                    dp[n]=0;
                    for(int i=1;i<=6;i++){
                        dp[n]=(dp[n]%mod+countWays(n-i)%mod)%mod;
                    }
                    return dp[n];
                }
            }
        }

    public:

        Program(int t = 1)
        {
            memset(dp, -1, sizeof(dp));
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
        }
        void solve()
        {
            cout << countWays(n) << endl;
        }
    };
}
signed main()
{
    fastio;
    Problem::Program program = Problem::Program();
    return 0;
}