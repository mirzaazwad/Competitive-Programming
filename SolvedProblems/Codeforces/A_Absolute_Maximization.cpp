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
      int n;
      vector<ll>arr;
    public:
      Program(int t=1){
        for(int i=1;i<=t;i++){
          takeInput();
          solve();
          clearSpace();
        }
      }
 
      void takeInput(){
        cin>>n;
        arr.resize(n);
        for(ll &i:arr)cin>>i;
      }
 
      void clearSpace(){
        arr.clear();
      }
      void solve(){
        ll Max=0;
        for(int i=0;i<n;i++){
          Max=Max | arr[i];
        }
        ll Min=arr[0];
        for(int i=1;i<n;i++){
          Min=Min & arr[i];
        }
        cout<<Max-Min<<endl;
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