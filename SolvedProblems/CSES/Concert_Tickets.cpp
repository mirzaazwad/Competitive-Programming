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
    int n,m;
    cin>>n>>m;
    multiset<ll>h;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        h.insert(x);
    }
    for(int i=0;i<m;i++){
        ll u;
        cin>>u;
        auto it=h.upper_bound(u);
        if(it==h.begin()){
            cout<<-1<<endl;
        }
        else{
            it--;
            cout<<*it<<endl;
            h.erase(it);
        }
    }
    return 0;
}