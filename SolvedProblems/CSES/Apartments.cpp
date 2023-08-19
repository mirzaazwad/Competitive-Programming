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
    int n,m;
    ll k;
    cin>>n>>m>>k;
    vector<ll>apl(n),app(m);
    for(ll &i:apl)cin>>i;
    for(ll &i:app)cin>>i;
    sort(apl.rbegin(),apl.rend());
    sort(app.rbegin(),app.rend());
    int i=0,j=0;
    ll cnt=0;
    while(i<n && j<m){
        if(abs(apl[i]-app[j])<=k){
            cnt++;
            i++;
            j++;
        }
        else if(apl[i]>app[j]){
            i++;
        }
        else{
            j++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}