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
  for(ll &i:arr){
    cin>>i;
  }
  sort(arr.begin(), arr.end());
  ll sum=0;
  ll j=1;
  for(int i=0;i<n;i++){
    if(arr[i]>j)sum+=(arr[i]-j);
    if(arr[i]>=j)j++;
  }
  cout<<sum<<endl;
}

int main()
{
    fastio;
    int tc;
    cin>>tc;
    while(tc--){
      solve();
    }
    return 0;
}