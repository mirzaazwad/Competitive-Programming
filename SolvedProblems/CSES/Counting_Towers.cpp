#include <bits/stdc++.h>

#define fastio                      \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL)

#define endl "\n"
#define ll long long
#define N 1000006
using namespace std;
ll dp[N][2];
const ll MOD = 1e9 + 7;
 //                                      _  _
    // dp[i][1] = last blocks are separate | || |
    //                                   _ _
    // dp[i][2] = last blocks are fused |   |
    
    // transition:
    //              _  _    _  _    _  _    _  _     _ _
    //  _  _       | || |  |_|| |  | ||_|  |_||_|   |_ _|
    // | || | =>   | || |, | || |, | || |, | || |,  | | |
    //              _ _    _ _    _ _ 
    //  _ _        |   |  |_|_|  |_ _|
    // |   |  =>   |   |, |   |, |   |

    // dp[i][1] = dp[i-1][1]*4 + dp[i-1][2]
    // dp[i][2] = dp[i-1][1] + dp[i-1][2]*2
void solve()
{
  int n;
  cin >> n;
  cout<<(dp[n][0]+dp[n][1])%MOD<<endl;
}

int main()
{
  fastio;
  dp[1][0] = dp[1][1] = 1;
  for (int i = 2; i < N; i++)
  {
    dp[i][0] = (dp[i - 1][0] * 4 + dp[i - 1][1]) % MOD;
    dp[i][1] = (dp[i - 1][0] + dp[i - 1][1] * 2)%MOD;
  }
  int tc;
  cin >> tc;
  while (tc--)
  {
    solve();
  }
  return 0;
}