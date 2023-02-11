#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
#define ll long long
using namespace std;
map<pair<int,int>,ll>dp;

ll maxpages(int i, ll w,vector<ll>h,vector<ll>p){
  if(w==0){
    return 0;
  }
  if(w<0){
    return -INT_MAX;
  }
  if(i==h.size()){
    return 0;
  }
  if(dp[{i,w}]!=0){
    return dp[{i,w}];
  }
  return dp[{i,w}]=(max(p[i]+maxpages(i+1,(w-h[i]),h,p),maxpages(i+1,w,h,p)));
}

int main()
{
    fastio;
    int n;
    ll x;
    cin>>n>>x;
    vector<ll>h(n),p(n);
    for(ll &i:h)cin>>i;
    for(ll &i:p)cin>>i;
    ll Min=h[min_element(h.begin(),h.end())-h.begin()];
    if(Min>x){
      cout<<0<<endl;
      return 0;
    }
    cout<<maxpages(0,x,h,p)<<endl;
    return 0;
}