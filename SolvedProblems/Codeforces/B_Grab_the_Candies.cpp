#include <bits/stdc++.h>

#define fastio                      \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL)

#define endl "\n"
#define ll long long
using namespace std;

void solve(){
   int n;
    cin >> n;
    vector<ll> arr(n);
    ll even=0;
    ll odd_min=INT_MAX;
    ll odd=0;
    deque<ll>v;
    for (ll &i : arr)
    {
      cin >> i;
      if(i%2==0){
        v.push_front(i);
      }
      else{
        v.push_back(i);
      }
    }
    ll mihai=0;
    ll bianca=0;
    for(int i=0;i<n;i++){
      if(v[i]%2==0){
        mihai+=v[i];
      }
      else{
        bianca+=v[i];
      }
      if(mihai<=bianca){
        cout<<"NO"<<endl;
        return;
      }
    }
    cout<<"YES"<<endl;
}

int main()
{
  fastio;
  int t;
  cin >> t;

  while (t--)
  {
    solve();
  }
  return 0;
}