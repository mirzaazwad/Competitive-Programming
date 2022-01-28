#include <bits/stdc++.h>

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl "\n"
#define SIZE 200000
using namespace std;

long long gcd(long long a,long long b){
    if(b==0)return a;
    else return gcd(b,a%b);
}

void solve(){
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    cout<<s<<"\n";
}

int main(void){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
