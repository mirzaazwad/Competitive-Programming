#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl "\n"
#define ll long long


const ll INF=1e17;
vector<ll>a,b;
int n,k;
ll p;
ll dp[2005][1005];

ll cost(int i,int j){
  if(i>k || j>n){
    return 0;
  }
  return abs(a[j]-b[i])+abs(b[i]-p);
}

ll calc(int pos,int last){
  if(pos>=k){
    return INF;
  }
  if(last>n){
    return 0;
  }
  if(dp[pos][last]!=-1){
    return dp[pos][last];
  }
  return dp[pos][last]=min(max(cost(pos+1,last),calc(pos+1,last)),max(cost(pos+1,last+1),calc(pos+1,last+1)));
}
 
int main()
{
    fastio;
    memset(dp,-1,sizeof(dp));
    cin>>n>>k>>p;
    a.resize(n+1);
    b.resize(k+1);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<k;i++)cin>>b[i];
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    cout<<calc(0,0)<<endl;
    return 0;
}