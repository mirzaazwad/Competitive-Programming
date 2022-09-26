#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define ll long long
#define endl "\n"

using namespace std;



void solve(){
    ll n;
    cin>>n;
    cout<<n+((n/2)+(n/3))*2<<endl;
    
}

int main()
{
    fastio;
    int t;
    cin >> t;
    
    while(t--)
    {
       solve();
    }
    return 0;
}