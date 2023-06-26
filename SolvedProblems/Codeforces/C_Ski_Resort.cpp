#include <bits/stdc++.h>

#define fastio                      \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL)

#define endl "\n"
#define ll long long

using namespace std;



void solve()
{
  int n, k;
  ll q;
  cin >> n >> k >> q;
  vector<ll> a(n);
  for (ll &i : a)
    cin >> i;
  ll count = 0;
  ll res = 0;
  for (int i = 0; i < n; i++)
  {
    if (a[i] <= q)
    {
      count++;
    }
    else
    {
      
      if (count >= k)
      {
        count-=(k-1);
        res += ((count*(count+1))/2);
      }
      count = 0;
    }
  }
  if (count >= k)
  {
    count-=(k-1);
    res += ((count*(count+1))/2);
  }
  if(res){
    cout << res << endl;
  }
  else{
    cout << res << endl;
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