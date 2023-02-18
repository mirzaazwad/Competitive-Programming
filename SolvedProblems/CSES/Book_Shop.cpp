#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
#define ll long long
using namespace std;
int n,x;
vector<ll>h,s;

int main()
{
    fastio;
    cin>>n>>x;
    h.resize(n);
    s.resize(n);
    for(ll &i:h)cin>>i;
    for(ll &i:s)cin>>i;
    ll dp[n+1][x+1];
    memset(dp,0,sizeof(dp));
    for(int i=1;i<=n;i++){
        for(int j=0;j<=x;j++){
            dp[i][j]=dp[i-1][j];
            if(j>=h[i-1]){
                dp[i][j] = max (dp[i][j],dp[i-1][j-h[i-1]] + s[i-1]); 
            }
        }
    }
    cout<<dp[n][x]<<endl;
    return 0;
}