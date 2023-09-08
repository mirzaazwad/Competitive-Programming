#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
typedef long long ll;
using namespace std;
map<ll, ll> cnt;

int main()
{
    fastio;
    int n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (ll &i : v)
        cin >> i;
    ll l = 0, r = 0, c = 0, ans = 0;
    while (l < n)
    {
        while (r < n && c + (cnt[v[r]]==0) <= k)
        {
            cnt[v[r]]++;
            c += (cnt[v[r]] == 1);
            r++;
        }
        ans += r-l;
        c -= (cnt[v[l]] == 1);
        cnt[v[l]]--;
        l++;
    }
    cout << ans << endl;
    return 0;
}