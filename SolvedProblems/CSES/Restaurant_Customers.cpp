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
    vector<pair<ll,ll>>vp;
    for(int i=0;i<n;i++){
        ll a,b;
        cin>>a>>b;
        vp.push_back({a,1});
        vp.push_back({b,-1});
    }
    sort(vp.begin(),vp.end());
    ll ans=0;
    ll sum=0;
    for(pair<ll,ll>& i:vp){
        sum+=i.second;
        ans=max(ans,sum);
    }
    cout<<ans<<endl;
    return 0;
}