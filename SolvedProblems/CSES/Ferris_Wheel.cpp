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
    vector<ll>arr(n);
    for(ll &i:arr)cin>>i;
    int cnt=1;
    ll sum=0;
    sort(arr.rbegin(),arr.rend());
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum>x){
            sum=0;
            cnt++;
        }
    }
    if(sum>0)cnt++;
    cout<<cnt<<endl;
    return 0;
}