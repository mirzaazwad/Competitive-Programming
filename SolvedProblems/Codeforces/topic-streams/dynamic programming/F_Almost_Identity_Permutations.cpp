#include <bits/stdc++.h>

#define fastio                      \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL)

#define endl "\n"
#define ll long long
using namespace std;

ll ncr(ll n,ll r){
  ll k=1;
  for(ll i=n;i>n-r;i--){
    k*=i;
  }
  for(ll i=2;i<=r;i++){
    k/=i;
  }
  return k;
}

int main()
{
  fastio;
  ll n, r;
  cin >> n >> r;
  memset(dp, -1, sizeof(dp));
  ll ans = 0;
  if (r >= 2)
    ans += ncr(n, 2);
  if (r >= 3)
    ans += 2 * ncr(n, 3);
  if (r >= 4)
    ans += 9 * ncr(n, 4);
  cout << 1 + ans << endl;
  return 0;
}