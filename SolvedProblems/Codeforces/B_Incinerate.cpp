//In the name of Allah, The Lord of Mercy, The Giver of Mercy
//Author: Mirza Mohammad Azwad
//Institution: Islamic University of Technology
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h> 
#define ll int64_t
#define short int16_t
#define int int32_t
#define endl "\n"
 
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
 
 

namespace Problem{
  class Program{
    private:
      ll n,k;
      vector<ll>h,p;
    public:
      Program(int t=1){
        for(int i=1;i<=t;i++){
          takeInput();
          solve();
          clearSpace();
        }
      }
 
      void takeInput(){
        cin>>n>>k;
        h.resize(n);
        p.resize(n);
        for(ll &i:h)cin>>i;

        for(ll &i:p)cin>>i;
      }
 
      void clearSpace(){
        h.clear();
        p.clear();
      }
      void solve(){
        vector<pair<ll,ll>>ph;
        for(int i=0;i<n;i++){
          ph.emplace_back(p[i],h[i]);
        }
        sort(ph.begin(),ph.end());
        ll decreaseInHealth=0;
        decreaseInHealth+=k;
        for(int i=0;i<n;i++){
          if(ph[i].second-decreaseInHealth<0){
            continue;
          }
          while(ph[i].second-decreaseInHealth>0){
            k-=ph[i].first;
            decreaseInHealth+=k;
            if(k<=0){
              cout<<"NO"<<endl;
              return;
            }
          }
        }
        cout<<"YES"<<endl;

      }
  };
}
signed main()
{
  fastio;
  int tc;
  cin >> tc;
  Problem::Program program=Problem::Program(tc);
  return 0;
}