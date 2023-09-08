#include <bits/stdc++.h>
using namespace std;
//In The Name Of Allah
//The Lord Of Mercy, The Giver Of Mercy
//Which of Allah's blessings can you deny?
typedef long long ll;
#define endl "\n"
#define all(v) v.begin(),v.end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, a, b;
    cin >> n >> a >> b;

    vector<ll> v(n);
    for (auto &e : v) cin >> e;

    vector<ll> pref(n + 1);
    for (int i = 1; i <= n; i++) pref[i] = pref[i - 1] + v[i - 1];

    multiset<ll> st;
    ll ans = LLONG_MIN;
    for (int i = a; i <= n; i++) {
        if (i > b) st.erase(st.find(pref[i - b - 1]));
        st.insert(pref[i - a]);
        ans = max(ans, pref[i] - *st.begin());
    }
    cout << ans << endl;

    return 0;
}