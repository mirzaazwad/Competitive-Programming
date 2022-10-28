#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define ll long long
#define endl "\n"
using namespace std;
#define N 10000007
ll dp[N];

ll countWays(ll m)
{
    if (m < 0)
    {
        return INT_MAX;
    }
    else if (m == 0)
    {
        return 0;
    }
    else
    {
        if(dp[m]!=-1){
            return dp[m];
        }
        else{
            string temp = to_string(m);
            sort(temp.rbegin(),temp.rend());
            for (char i : temp)
            {
                return dp[m]=countWays(m - (ll)(i - '0')) + 1;
            }
            return 0;
        }
        
    }
}

int main()
{
    fastio;
    int n;
    cin >> n;
    memset(dp,-1,sizeof(dp));
    cout << countWays(n) << endl;
    return 0;
}