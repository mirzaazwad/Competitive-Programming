#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
typedef long long ll;
using namespace std;
const ll mod=1e9+7;

ll bigmod(ll a,ll p){
    if(p==0){
        return 1;
    }
    if(p%2==0){
        ll c=bigmod(a,p/2);
        return (c*c)%mod;
    }
    else{
        return (a*bigmod(a,p-1))%mod;
    }
}

int main()
{
    fastio;
    ll n;
    cin>>n;
    cout<<bigmod(2,n)<<endl;
    return 0;
}