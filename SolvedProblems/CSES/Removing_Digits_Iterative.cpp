#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
#define ll long long
using namespace std;

int main()
{
    fastio;
    int n;
    cin>>n;
    string s;
    s=to_string(n);
    vector<ll>dp(n+1,INT_MAX);
    dp[0]=0;
    for(int i=1;i<=n;i++){
      for(auto u:s){
        dp[i]=min(dp[i],dp[i-(u-'0')]+1);
      }
    }
    cout<<dp[n]<<endl;
    return 0;
}