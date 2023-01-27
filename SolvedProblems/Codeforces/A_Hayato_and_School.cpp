#include <bits/stdc++.h>

#define fastio                      \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL)

#define endl "\n"
#define ll long long
using namespace std;

int main()
{
  fastio;
  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;
    vector<ll> arr(n);
    for (ll &i : arr)
      cin >> i;
    stack<pair<ll, ll>> even, odd;
    for (int i = 0; i < n; i++)
    {
      if (arr[i] % 2 == 0)
        even.emplace(arr[i], i + 1);
      else
        odd.emplace(arr[i], i + 1);
    }
    ll sum = accumulate(arr.begin(), arr.end(), 0LL);
    if (arr.size() == 3 && sum % 2 == 0 || odd.size() == 0)
    {
      cout << "NO" << endl;
      continue;
    }
    else
    {
      if (even.size() >= 2)
      {
        cout << "YES" << endl;
        cout << odd.top().second << " ";
        odd.pop();
        int count = 0;
        while (!even.empty() && count < 2)
        {
          cout << even.top().second << " ";
          count++;
          even.pop();
        }
        cout << endl;
      }
      else if (odd.size() >= 3)
      {
        cout << "YES" << endl;
        int count = 0;
        while (!odd.empty() && count < 3)
        {
          cout << odd.top().second << " ";
          count++;
          odd.pop();
        }
        cout<<endl;
      }
    }
  }
  return 0;
}