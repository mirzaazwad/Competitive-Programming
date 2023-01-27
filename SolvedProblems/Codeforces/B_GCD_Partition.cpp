#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
#define ll long long

void solve(){
  int n;
  cin>>n;
  vector<ll>arr(n);
  for(ll &i:arr)cin>>i;
  vector<ll>prefix(n);
  partial_sum(arr.begin(),arr.end(),prefix.begin());
  ll Max=INT_MIN;
  for(int i=0;i<n-1;i++){
    Max=max(Max,__gcd(prefix[n-1]-prefix[i],prefix[i]));
  }
  cout<<Max<<endl;
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