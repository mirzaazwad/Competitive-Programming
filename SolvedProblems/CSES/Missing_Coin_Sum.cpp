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
    sort(a.begin(),a.end());
    ll k=1;
    for(int i=0;i<n;i++){
        if(k>=a[i]){
            k+=a[i];
        }
        else break;
    }
    cout<<k<<endl;
    return 0;
}