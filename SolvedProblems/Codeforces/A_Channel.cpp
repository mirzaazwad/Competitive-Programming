#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    int a;
    cin>>a;
    int q;
    cin>>q;
    string b;
    cin>>b;
    int i=0;
    int maybe=0,yes=0;
    if(a==n){
        cout<<"YES"<<endl;
        return;
    }
    for(char c:b){
        if(c=='+'){
            yes++;
            maybe++;
        }
        else{
            maybe--;
        }
        if(maybe+a==n){
            cout<<"YES"<<endl;
            return;
        }
    }
    if(yes+a>=n){
        cout<<"MAYBE"<<endl;
        return;
    }
    cout<<"NO"<<endl;

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