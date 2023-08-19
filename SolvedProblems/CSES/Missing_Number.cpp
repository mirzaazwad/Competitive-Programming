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
    vector<ll>v;
    ll x;
    while(cin>>x){
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        if(v[i]!=i+1){
            cout<<i+1<<endl;
            break;
        }
    }
    return 0;
}