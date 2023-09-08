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
    vector<pair<ll,pair<ll,ll>>>vp(n);
    for(pair<ll,pair<ll,ll>> &i:vp){
        cin>>i.second.first>>i.second.second;
        i.first==abs(i.second.first-i.second.second);
    }
    sort(vp.begin(),vp.end());
    ll ans=0;
    ll curr_time=0;
    for(auto u:vp){
        curr_time+=u.second.first;
        ans+=u.second.second-curr_time;
    }
    cout<<ans<<endl;

    return 0;
}