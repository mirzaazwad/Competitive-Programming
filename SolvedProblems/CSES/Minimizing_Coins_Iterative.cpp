#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
#define ll long long
using namespace std;
int n,m;

int main()
{
    fastio;
    int n,m;
    cin>>n>>m;
    vector<ll>arr(n);
    for(ll &i:arr)cin>>i;
    vector<ll>dp(m+5,INT_MAX);
    dp[0]=0;
    for(int i=0;i<n;i++){
      for(int j=arr[i];j<=m;j++){
        dp[j]=min(dp[j],dp[j-arr[i]]+1);
      }
    }
    cout<<(dp[m]==INT_MAX?-1:dp[m])<<endl;
    return 0;
}