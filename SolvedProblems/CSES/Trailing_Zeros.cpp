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
    ll n;
    cin>>n;
    ll curr=1;
    ll ans=0;
    while(curr<=n){
        curr*=5;
        ans+=n/curr;
    }
    cout<<ans<<endl;
    return 0;
}