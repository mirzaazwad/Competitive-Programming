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
    vector<int>dices={1,2,3,4,5,6};
    vector<ll>dp(n+1,0);
    dp[0]=1;
    const ll mod=1e9+7;
    for(int i=1;i<=n;i++){
      for(int j=1;j<=6;j++){
        if(i-j>=0){
          dp[i]+=((dp[i-j])%mod);
        }
      }
      dp[i]=dp[i]%mod;
    }
    cout<<dp[n]<<endl;
    return 0;
}