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
      vector<ll>a,b;
    public:
      Program(int t=1){
        for(int i=1;i<=t;i++){
          takeInput();
          solve();
          clearSpace();
        }
      }
 
      void takeInput(){
          for(int i=0;i<3;i++)
          {
            ll x,y;
            cin>>x>>y;
            a.push_back(x);
            b.push_back(y);
          }
      }
 
      void clearSpace(){
        a.clear();
        b.clear();
      }
      void solve(){
        int xsame=0;
        int ysame=0;
        for(int i=0;i<3;i++){
          for(int j=0;j<3;j++){
            if(a[i]==a[j] && i!=j){
              xsame++;
            }
            if(b[i]==b[j] && i!=j){
              ysame++;
            }
          }
        }
        if(xsame>0 && ysame>0)
        {
          cout<<"NO"<<endl;
        }
        else{
          cout<<"YES"<<endl;
        }
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