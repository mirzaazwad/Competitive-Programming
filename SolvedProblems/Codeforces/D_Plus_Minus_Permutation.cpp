#include <bits/stdc++.h>
using namespace std;
//In The Name Of Allah
//The Lord Of Mercy, The Giver Of Mercy
//Which of Allah's blessings can you deny?
typedef long long ll;
#define endl "\n"
#define all(v) v.begin(),v.end()

ll range_sum(ll l, ll r){
    if(l>r){
        return 0;
    }
    else{
        return (l+r)*(r-l+1)/2;
    }
}

void solve(){
    ll n,x,y;
    cin>>n>>x>>y;
    ll l=(x*y)/__gcd(x,y);
    ll r=n/x - n/l;
    ll b=n/y - n/l;
    cout<<range_sum(n-(r-1),n)-range_sum(1,b)<<endl;
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