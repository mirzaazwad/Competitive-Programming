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
      vector<ll>v;
      ll n,m;
    public:
      Program(int t=1){
        for(int i=1;i<=t;i++){
          takeInput();
          solve();
          clearSpace();
        }
      }
 
      void takeInput(){
        cin>>n>>m;
        v.resize(n);
        for(ll &i:v)cin>>i;
      }
 
      void clearSpace(){
        v.clear();
      }


      void solve(){
        for(int i=0;i<n-1;i++){
          if(v[i]-v[i+1]>m){
            v[i+1]=v[i]-m;
          }
        }
        for(int i=n-1;i>0;i--){
          if(v[i]-v[i-1]>m){
            v[i-1]=v[i]-m;
          }
        }
        for(int i=0;i<n;i++){
          cout<<v[i]<<" ";
        }
        cout<<endl;
      }
  };
}
signed main()
{
  fastio;
  Problem::Program program=Problem::Program();
  return 0;
}