#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
typedef long long ll;
using namespace std;

int main()
{
    fastio;
    int n;
    cin>>n;
    vector<ll>v(n);
    for(ll &i:v){
        cin>>i;
    }
    ll sum=accumulate(v.begin(),v.end(),0LL);
    ll curr=LLONG_MAX;
    for(ll i=0;i<(1LL<<n);i++){
        ll s=0;
        for(ll j=0;j<n;j++){
            if(i&(1LL<<j)){
                s+=v[j];
            }
        }
        curr=min(curr,abs(sum-2*s));
    }
    cout<<curr<<endl;

    return 0;
}