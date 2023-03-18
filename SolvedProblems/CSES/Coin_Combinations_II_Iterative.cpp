#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
#define ll long long
using namespace std;
int n,m;
vector<ll>coins,dp;

ll coin_comb(int sum){
  if(sum==0){
    return 1;
  }
  if(sum<0){
    return 0;
  }
  if(dp[sum]!=-1){
    return dp[sum];
  }
  dp[sum]=0;
  for(auto u:coins){
    dp[sum]+=coin_comb(sum-u)%((ll)(1e9+7));
  }
  return dp[sum]%((ll)(1e9+7));
}

int main()
{
    fastio;
    cin>>n>>m;
    coins.resize(n);
    dp.assign(m+5,0);
    for(ll &i:coins)cin>>i;
    dp[0]=1;
    for(int i=0;i<n;i++){
      for(int j=coins[i];j<=m;j++){
        dp[j]+=dp[j-coins[i]]%((ll)(1e9+7));
      }
    }
    cout<<dp[m]%((ll)(1e9+7))<<endl;
    return 0;
}