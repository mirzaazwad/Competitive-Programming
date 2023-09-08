#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
typedef long long ll;
int main()
{
    fastio;
    int n;
    cin >> n;
    ll x;
    cin >> x;
    vector<ll>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    map<ll,pair<int,int>>mp;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            mp[v[i]+v[j]]={i,j};
        }
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            ll curr=x-v[i]-v[j];
            if(mp.find(curr)!=mp.end()){
                pair<int,int>temp=mp[curr];
                if(temp.first!=i && temp.first!=j && temp.second!=i && temp.second!=j){
                    cout<<i+1<<" "<<j+1<<" "<<temp.first+1<<" "<<temp.second+1<<endl;
                    return 0;
                }
            }
        }
    }
    cout<<"IMPOSSIBLE"<<endl;
    return 0;
}