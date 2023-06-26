#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
#define ll long long
using namespace std;
vector<ll>ans;
int p;


ll call() {
    int cnt = 0;
    ll res=0;
    ll n=ans.size();
    for(auto u:ans){
      if(u%2==0){
        cnt++;
      }
    }
    if(cnt==ans.size() && p==0){
      res=1LL<<n;
    }
    if(ans.size()==1 && p==1){
      if(ans[0]%2){
        res=1;
      }
      else{
        res=0;
      }
    }
    if(cnt<ans.size()){
      res= 1LL<<(n-1);
    }
    return res;
    
}





int main()
{
    fastio;
    int n;
    cin>>n>>p;
    ans.resize(n);
    for(ll &i:ans)cin>>i;
    cout<<call()<<endl;
    return 0;
}