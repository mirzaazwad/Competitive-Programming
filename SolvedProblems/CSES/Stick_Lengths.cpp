#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

typedef long long ll;

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int n;
    cin>>n;
    vector<ll>a(n);
    for(ll &i:a)cin>>i;
    sort(a.begin(),a.end());
    ll median=a[n/2];
    ll cost=0;
    for(int i=0;i<n;i++){
        cost+=abs(a[i]-median);
    }
    cout<<cost<<endl;
    return 0;
}