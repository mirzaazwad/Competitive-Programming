#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
#define ll long long
using namespace std;

int main()
{
    fastio;
    int n;
    cin>>n;
    vector<ll>dp;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        auto it=lower_bound(dp.begin(),dp.end(),x);
        if(it==dp.end()){
            dp.push_back(x);
        }
        else{
            *it=x;
        }
    }
    cout<<dp.size()<<endl;
    return 0;
}