#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
#define ll long long
using namespace std;
vector<ll>arr;
map<ll,ll>mp;

int main()
{
    fastio;
    int n;
    cin>>n;
    arr.resize(n);
    for(ll &i:arr){
      cin>>i;
      mp[i]++;
    }
    if(mp.size()==1){
      for(auto u:mp){
        cout<<u.first*u.second<<endl;
        return 0;
      }
    }
    ll dp[100009]={0};
    for(int i=0;i<100009;i++){
      dp[i]=INT_MIN;
    }
    dp[0]=0;
    dp[1]=mp[1];
    ll Max=INT_MIN;
    for(int i=2;i<=n;i++){
      dp[i]=max(dp[i-1],dp[i-2]+mp[i]*i);
      Max=max(Max,dp[i]);
    }
    cout<<Max<<endl;

    return 0;
}