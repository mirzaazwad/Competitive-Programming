#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
typedef long long ll;
using namespace std;
vector<ll> sum;

int main()
{
    fastio;
    int n;
    cin >> n;
    ll x;
    cin >> x;
    vector<pair<ll,ll>>vp(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vp[i].first;
        vp[i].second=i+1;
    }
    sort(vp.begin(), vp.end());
    for(int i=0;i<n;i++){
        int l=0;
        int r=n-1;
        while(l<r){
            ll curr=x-vp[i].first;
            if(l!=i && r!=i && vp[l].first+vp[r].first==curr){
                cout<<vp[i].second<<" "<<vp[l].second<<" "<<vp[r].second<<endl;
                return 0;
            }
            else if(vp[l].first+vp[r].first<curr)l++;
            else r--;
        }
    }
    cout<<"IMPOSSIBLE"<<endl;

    return 0;
}