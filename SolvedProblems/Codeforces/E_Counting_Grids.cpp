#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
#define ll long long
using namespace std;
const ll mod=998244353;

int main()
{
    fastio;
    ll n;
    cin>>n;
    ll dp[n*n+5];
    dp[0]=1;
    dp[1]=1;
    for(int i=1;i<=n*n+2;i++){
      dp[i]=((dp[i-1]%mod)*(i%mod))%mod;
    }
    ll ans=((dp[n-1]%mod)*(dp[n-1]%mod))%mod;
    ans=((ans%mod)*(dp[(n-1)*(n-1)]%mod))%mod;
    cout<<ans<<endl;



    return 0;
}