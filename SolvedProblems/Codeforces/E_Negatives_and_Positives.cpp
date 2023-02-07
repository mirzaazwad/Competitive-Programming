#include <bits/stdc++.h>

#define fastio                      \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL)

#define endl "\n"

using namespace std;
#define ll long long

void solve()
{
  int n;
  cin >> n;
  vector<ll> arr(n);
  int negcount=0;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
    if(arr[i]<0){
      arr[i]=-arr[i];
      negcount++;
    }
  }
  if(negcount%2){
    int min=min_element(arr.begin(),arr.end())-arr.begin();
    arr[min]=-arr[min];
  }
  ll sum=accumulate(arr.begin(), arr.end(),0LL);
  cout<<sum<<endl;
}

int main()
{
  fastio;
  int tc;
  cin >> tc;
  while (tc--)
  {
    solve();
  }
  return 0;
}