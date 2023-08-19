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
    cin>>n;
    map<ll,ll>mp;
    for(int i=0;i<n;i++){
        ll u;
        cin>>u;
        mp[u]=i+1;
    }
    int lo=1;
    int rounds=1;
    for(int i=1;i<=n;i++){
        if(mp[i]<lo){
            rounds++;
        }
        lo=mp[i];
    }
    cout<<rounds<<endl;

    return 0;
}