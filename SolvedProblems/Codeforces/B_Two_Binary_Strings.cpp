#include <bits/stdc++.h>
using namespace std;
//In The Name Of Allah
//The Lord Of Mercy, The Giver Of Mercy
//Which of Allah's blessings can you deny?
typedef long long ll;
#define endl "\n"
#define all(v) v.begin(),v.end()

void solve() {
    string a;
    string b;
    cin>>a>>b;
    int n=a.length();
    map<int,int>matching;
    for(int i=0;i<n;i++){
        if(a[i]=='0' && b[i]=='0'){
            matching.emplace(i,-1);
        }
        if(a[i]=='1' && b[i]=='1'){
            matching.emplace(i,1);
        }
    }
    for(auto u:matching){
        if(u.second==-1 && matching[u.first+1]==1){
            cout<<"YES"<<endl;
            return;
        }
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