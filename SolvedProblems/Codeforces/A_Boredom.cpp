#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
#define ll long long
using namespace std;
vector<ll>arr;
map<ll,ll>freq;
vector<ll>dp;

ll res(int i){
  if(freq.size()==1){
    for(auto u:freq){
      return u.first*u.second;
    }
  }
  if(i<=0){
    return 0;
  }
  if(dp[i]!=-1){
    return dp[i];
  }
  return dp[i]=max(res(i-1),freq[i+1]*(i+1)+res(i-2));
}

int main()
{
    fastio;
    int n;
    cin>>n;
    arr.resize(n);
    dp.assign(n+5,-1);
    for(int i=0;i<n;i++){
      cin>>arr[i];
      freq[arr[i]]++;
    }
    cout<<res(n-1)<<endl;

    return 0;
}