#include <bits/stdc++.h>
typedef long long ll;

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

typedef tree<pair<ll, ll>, null_type, less<pair<ll, ll>>, rb_tree_tag,
             tree_order_statistics_node_update>
    ordered_set;
using namespace std;

int main()
{
    fastio;
    int n, k;
    cin >> n >> k;
    ordered_set o;
    vector<ll>ans;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        v[i]=x;
        o.insert({x,i});
        if(i>=k-1){
            ans.push_back(o.find_by_order((k-1)/2)->first);
            o.erase({v[i-k+1],i-k+1});
        }
    }
    for(ll i:ans)cout<<i<<" ";

    return 0;
}