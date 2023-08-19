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
    vector<ll>v(n),prefix(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    partial_sum(v.begin(),v.end(),prefix.begin());
    int i=0,j=0;
    ll cnt=0;
    while(j<n){
        ll sum=prefix[j]-(i>0?prefix[i-1]:0);
        if(sum==x){
            cnt++;
            i++;
            j++;
        }
        else if(sum>x){
            i++;
        }
        else{
            j++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}