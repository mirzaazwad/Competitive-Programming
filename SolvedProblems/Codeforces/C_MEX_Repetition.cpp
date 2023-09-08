#include <bits/stdc++.h>
using namespace std;
//In The Name Of Allah
//The Lord Of Mercy, The Giver Of Mercy
//Which of Allah's blessings can you deny?
typedef long long ll;
#define endl "\n"


void solve() {
    int n;
    cin>>n;
    ll k;
    cin>>k;
    set<ll>s;
    for(int i=0;i<=n;i++){
        s.insert(i);
    }
    vector<ll>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        s.erase(a[i]);
    }
    a.push_back(*s.begin());
    rotate(a.begin(),a.begin()+n+1-k%(n+1),a.end());
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
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