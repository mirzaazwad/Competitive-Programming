#include <bits/stdc++.h>

#define fastio                      \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL)

#define endl "\n"
#define ll long long
using namespace std;
vector<ll> arr;
map<ll, ll> mp;
vector<ll>dp(1000007,-1);
int n;

ll func(int i)
{
  if(mp.size()==1){
    for(auto u:mp){
      return u.first*u.second;
    }
  }
  if (i >= 0 && i <= n)
  {
    if (dp[i] != -1)
    {
      return dp[i];
    }
    else
      return dp[i] = max(func(i - 1), func(i - 2) + mp[i] * i);
  }
  return 0;
}

int main()
{
  fastio;
  cin >> n;
  arr.resize(n + 1);
  for (int i = 1; i <= n; i++)
  {
    cin >> arr[i];
    mp[arr[i]]++;
  }
  cout << func(n) << endl;
  return 0;
}