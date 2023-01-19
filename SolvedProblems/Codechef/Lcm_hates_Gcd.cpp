#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
void solve(){
    ll a, b;
    cin >> a >> b;
    if(b%a==0 && b>a){
      cout<<0<<endl;
    }
    else if(__gcd(a,b)==1){
      cout<<a-__gcd(a,b)<<endl;
    }
    else{
      cout<<a-__gcd(a,b)<<endl;
    }
}

int main() {
    int t;
    cin>>t;
    while(t--){
      solve();
    }
    return 0;
}