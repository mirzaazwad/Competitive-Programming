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
   vector<ll>v(n);
   ll psums=0;
   map<ll,ll>mp;
   mp[psums]=1;
   for(ll &i:v){
    cin>>i;
    psums+=i;
    mp[(psums%n+n)%n]++;
   }
   ll ans=0;
   for(auto u:mp){
    ll temp=u.second;
    ans+=(temp*(temp-1))/2;
   }
   cout<<ans<<endl;
    return 0;
}