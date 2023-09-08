#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"

void solve() {
    double d,n;
    cin>>d>>n;
    cout<<fixed<<setprecision(3)<<2*2*acos(0.0)*(double(n*d)/double(n-1))+1e-12<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    int i=0;
    while (t--) {
        i++;
        cout<<"Case "<<i<<": ";
        solve();
    }

    return 0;
}