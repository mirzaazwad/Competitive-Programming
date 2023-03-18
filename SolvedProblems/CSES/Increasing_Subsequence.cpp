#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
#define ll long long
using namespace std;

int main()
{
    fastio;
    int n;
    cin>>n;
    vector<ll>v(n);
    for(ll &i:v)cin>>i;
    vector<ll>ans;
    for(int i=0;i<n;i++){
      int ix=lower_bound(ans.begin(),ans.end(),v[i])-ans.begin();
      if(ix==ans.size()){
        ans.push_back(v[i]);
      }
      else{
        ans[ix]=v[i];
      }
    }
    cout<<ans.size()<<endl;
    return 0;
}