#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
typedef long long ll;
using namespace std;
ll n,k;
ll sum=0;
vector<ll>v;

bool IsPossible(ll mid){
    ll cnt=1;
    ll curr_sum=0;
    for(ll i=0;i<n;i++){
        if(v[i]>mid)return false;
        if(curr_sum+v[i]>mid){
            cnt++;
            curr_sum=v[i];
            if(cnt>k)return false;
        }
        else curr_sum+=v[i];
    }
    return true;
}

int main()
{
    fastio;
    cin>>n>>k;
    v.resize(n);
    for(ll &i:v){
        cin>>i;
        sum+=i;
    }
    ll l=0,r=sum,ans=0;
    while(l<=r){
        ll mid=(l+r)/2;
        if(IsPossible(mid)){
            ans=mid;
            r=mid-1;
        }
        else l=mid+1;
    }

    cout<<ans<<endl;
    
    return 0;
}