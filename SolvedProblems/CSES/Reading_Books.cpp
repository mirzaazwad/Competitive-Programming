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
    ll Max=max_element(a.begin(),a.end())-a.begin();
    ll sum =accumulate(a.begin(),a.end(),0LL);
    cout<<max(sum,2*a[Max])<<endl;
    return 0;
}