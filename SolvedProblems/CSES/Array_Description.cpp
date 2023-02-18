#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
#define ll long long
using namespace std;
const ll MOD = 1e9 + 7;
ll dp[100001][101];
int main()
{
    fastio;
    int n, m;
    cin >> n >> m;
    vector<ll> arr(n);
    for (ll &i : arr)
        cin >> i;
    if (arr[0] == 0)
    {
        fill(dp[0], dp[0] + 101, 1);
    }
    else
    {
        dp[0][arr[0]] = 1;
    }
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == 0)
        {
            for (int j = 1; j <= m; j++)
            {
                dp[i][j] += dp[i - 1][j];
                if (j - 1 > 0)
                    dp[i][j] += dp[i - 1][j - 1];
                if (j + 1 <= m)
                    dp[i][j] += dp[i - 1][j + 1];
                dp[i][j] %= MOD;
            }
        }
        else
        {
            dp[i][arr[i]] += dp[i - 1][arr[i]];
            if (arr[i] - 1 > 0)
                dp[i][arr[i]] += dp[i - 1][arr[i] - 1];
            if (arr[i] + 1 <= m)
                dp[i][arr[i]] += dp[i - 1][arr[i] + 1];
            dp[i][arr[i]] % MOD;
        }
    }
    ll ans = 0;
    for (int i = 1; i <= m; i++)
    {
        ans += dp[n - 1][i];
        ans %= MOD;
    }
    cout << ans << endl;
    return 0;
}