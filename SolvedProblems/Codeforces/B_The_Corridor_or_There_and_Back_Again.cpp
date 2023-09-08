#include <bits/stdc++.h>
using namespace std;
// In The Name Of Allah
// The Lord Of Mercy, The Giver Of Mercy
// Which of Allah's blessings can you deny?
typedef long long ll;
#define endl "\n"
#define all(v) v.begin(), v.end()

void solve()
{
    int n;
    cin >> n;
    map<ll, vector<ll>> mp;
    for (int i = 0; i < n; i++)
    {
        ll a, b;
        cin >> a >> b;
        mp[a].push_back(b);
    }
    vector<ll> active_traps;
    int i = 1;
    bool trapped = false;
    for (i = 1; i <= 300; i++)
    {
        if (!mp[i].empty())
        {
            for (auto x : mp[i])
            {
                active_traps.push_back(x);
            }
        }
        for (auto &u : active_traps)
        {
            u-=2;
            if (u <= 0)
            {
                trapped = true;
                break;
            }
        }
        if (trapped)
        {
            break;
        }
        
    }

    cout << i  << endl;
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