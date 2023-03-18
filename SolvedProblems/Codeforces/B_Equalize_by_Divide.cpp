#include <bits/stdc++.h>

#define fastio                      \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL)

#define endl "\n"
#define ll long long
using namespace std;

void solve()
{
  int n;
  cin >> n;
  vector<pair<ll,ll>> a(n);
  set<ll> s;
  int one_count = 0;
  for (int i = 0; i < n; i++)
  {
    cin>>a[i].first;
    a[i].second=i;
    s.insert(a[i].first);
    if(a[i].first==1){
      one_count++;
    }
  }
  if (s.size() == 1)
  {
    cout << 0 << endl;
    return;
  }
  if (one_count > 0)
  {
    cout << -1 << endl;
    return;
  }
  sort(a.begin(), a.end());
  vector<pair<ll,ll>>v;
  while(a.front().first!=a.back().first){
    a.back().first=(a.back().first+a.front().first-1)/a.front().first;
    v.emplace_back(a.back().second+1,a.front().second+1);
    sort(a.begin(),a.end());
  }
  cout<<v.size()<<endl;
  for(auto u:v){
    cout<<u.first<<" "<<u.second<<endl;
  }
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