#include <bits/stdc++.h>
using namespace std;
//In The Name Of Allah
//The Lord Of Mercy, The Giver Of Mercy
//Which of Allah's blessings can you deny?
typedef long long ll;
#define endl "\n"
#define all(v) v.begin(),v.end()

void solve() {
    int n;
    cin>>n;
    vector<ll>a(n);
    for(auto &e:a) cin>>e;
    string s;
    cin>>s;
    ll x0=0,x1=0;
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            x0^=a[i];
        }
        else{
            x1^=a[i];
        }
    }

    vector<ll>prefix(n);
    prefix[0]=a[0];
    for(int i=1;i<n;i++) prefix[i]=prefix[i-1]^a[i];
    int q;
    cin>>q;
    while(q--){
        int op,ocode,l,r;
        cin>>op;
        if(op==2){
            cin>>ocode;
            if(ocode==0) cout<<x0<<" ";
            else cout<<x1<<" ";
        }
        else{
            cin>>l>>r;
            l--,r--;
            ll ans=prefix[r];
            if(l>0) ans^=prefix[l-1];
            x1^=ans;
            x0^=ans;
        }
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