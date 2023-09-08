#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"


void solve()
{
    int n;
    cin >> n;
    map<int,int>mp;
    vector<ll> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        mp[a[i]]=i+1;
    }
    int ans = 0;
    for (int i = 1; i < n; i++)
      ans += mp[i] > mp[i+1];
 
    cout << ans << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}