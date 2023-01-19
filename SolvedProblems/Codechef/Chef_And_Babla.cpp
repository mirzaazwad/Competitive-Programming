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
  vector<ll> arr(n);
  vector<ll> pos, neg, zero;
  for (ll &i : arr)
  {
    cin >> i;
    if (i > 0)
    {
      pos.push_back(i);
    }
    else if (i == 0)
    {
      zero.push_back(i);
    }
    else
    {
      neg.push_back(-i);
    }
  }
  sort(pos.begin(), pos.end());
  sort(neg.begin(), neg.end());
  ll val1 = 0, val2 = 0;
  if (!neg.empty())
    val1 = neg.front() - 1;
  if (!pos.empty())
    val2 = pos.front() - 1;
  if (!zero.empty())
  {
    cout << -1 << endl;
  }
  else if(neg.empty()){
    cout<<pos.front()-1<<endl;
  }
  else if(pos.empty()){
    cout<<neg.front()-1<<endl;
  }
  else{
    cout<<min(val1,val2)<<endl;
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