#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
#define ll long long
using namespace std;

void solve(){
  map<ll,ll>mp;
  int n;
  cin>>n;
  vector<int>v(n);
  int lim=INT_MIN;
  for(int i=0;i<n;i++){
    cin>>v[i];
    mp[v[i]]++;
  }
  
  

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