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
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    map<ll,ll>mp;
    mp[0]=1;
    ll prefix_sum=0;
    ll sum=0;
    for(int i=0;i<n;i++){
        prefix_sum+=v[i];
        sum+=mp[prefix_sum-x];
        mp[prefix_sum]++;
    }
    cout<<sum<<endl;
    return 0;
}