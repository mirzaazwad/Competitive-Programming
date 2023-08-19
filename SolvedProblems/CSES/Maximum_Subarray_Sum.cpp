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
    vector<ll>a(n);
    for(ll &i:a)cin>>i;
    ll Max=INT_MIN,curr=0;
    for(int i=0;i<n;i++){
        Max=max(Max,curr+a[i]);
        curr=max(curr+a[i],0LL);
    }
    cout<<Max<<endl;
    return 0;
}