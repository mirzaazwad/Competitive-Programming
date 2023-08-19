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
    ll x;
    int n;
    cin>>x>>n;
    set<ll>st;
    st.insert(0);
    st.insert(x);
    multiset<ll>ms;
    ms.insert(x);
    for(int i=0;i<n;i++){
        ll m;
        cin>>m;
        auto it=st.lower_bound(m);
        ll r=*it;
        it--;
        ll l=*it;
        ms.erase(ms.find(r-l));
        ms.insert(m-l);
        ms.insert(r-m);
        st.insert(m);
        cout<<*ms.rbegin()<<" ";
    }
    cout<<endl;
    return 0;
}