#include <bits/stdc++.h>
using namespace std;
//In The Name Of Allah
//The Lord Of Mercy, The Giver Of Mercy
//Which of Allah's blessings can you deny?
typedef long long ll;
#define endl "\n"
#define all(v) v.begin(),v.end()
const ll mod=1e9+9;

void solve() {
    int n;
    cin>>n;
    vector<ll>a(n);
    for(ll &i:a)cin>>i;
    ll sum=1;
    for(int i=0;i<n;i++){
        sum=(sum*(1+2*a[i])-a[i])%mod;
    }
    cout<<sum-1<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}