#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
#define ll long long
using namespace std;

void solve(){
  int n,q;
  cin>>n>>q;
  vector<ll>arr(n);
  for(ll&i:arr)cin>>i;
  vector<ll>prefix(n);
  partial_sum(arr.begin(),arr.end(),prefix.begin());

  while(q--){
    ll l,r,k;
    cin>>l>>r>>k;
    l--;
    r--;
    ll rem_sum=0;

    if(l-1<0){
      if(r+1>=n){
        rem_sum=0;
      }
      else{
        rem_sum=prefix[n-1]-prefix[r];
      }
    }
    else{
      if(r+1>=n){
        rem_sum=prefix[l-1];
      }
      else{
        rem_sum=prefix[l-1]+prefix[n-1]-prefix[r];
      }
    }
    if((rem_sum+(k*(l-r+1)))%2){
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }
  }
}

int main()
{
    fastio;
    int t;
    cin >> t;
    while(t--)
    {
       solve();
    }

    return 0;
}