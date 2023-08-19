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
        vp.push_back({b,a});
    }
    sort(vp.begin(),vp.end());
    ll ans=0;
    ll curr_time=vp[0].first;
    for(auto u:vp){
        if(u.second>=curr_time){
            ans++;
            curr_time=u.first;
        }
    }
    cout<<ans+1<<endl;

    return 0;
}