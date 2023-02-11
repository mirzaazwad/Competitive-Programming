#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
long long coins[55];
int n,m;
long long dp[55][255];

long long getWays(int i,int w){
  if(i==m){
    return 0;
  }
  if(w==0)return 1;
  if(w<0)return 0;
  if(dp[i][w]!=-1){
    return dp[i][w];
  }
  return dp[i][w]=getWays(i,w-coins[i])+getWays(i+1,w);
}

int main()
{
    fastio;
    cin>>n>>m;
    memset(dp,-1,sizeof(dp));
    for(int i=0;i<m;i++)cin>>coins[i];
    cout<<getWays(0,n)<<endl;
    return 0;
}