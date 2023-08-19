#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
typedef long long ll;
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
  
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>

int main()
{
    fastio;
    ll n,k;
    cin>>n>>k;
    ordered_set o_set;
    for(int i=1;i<=n;i++){
        o_set.insert(i);
    }
    int ix=k%n;
    while(n--){
        auto it=o_set.find_by_order(ix);
        cout<<*it<<" ";
        o_set.erase(it);
        if(n>0){
            ix=(ix%n+k)%n;
        }
    }
    return 0;

    
}