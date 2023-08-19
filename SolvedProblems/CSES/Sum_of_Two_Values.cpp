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
    ll x;
    cin>>n>>x;
    map<ll,ll>mp;
    bool found=false;
    for(int i=0;i<n;i++){
        ll u;
        cin>>u;
        mp[u]=i+1;
        if(mp[x-u] && mp[x-u]!=i+1){
            found=true;
            cout<<mp[x-u]<<" "<<i+1<<endl;
        }
    }
    if(!found)cout<<"IMPOSSIBLE"<<endl;
    return 0;
}