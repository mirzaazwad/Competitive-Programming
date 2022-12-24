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
      int n,k;
    public:
      Program(int t=1){
        for(int i=1;i<=t;i++){
          takeInput();
          solve();
          clearSpace();
        }
      }
 
      void takeInput(){
        cin>>k>>n;
      }
 
      void clearSpace(){
        
      }
      void solve(){
        int sum=0;
        for(int i=1;i<=k;i++){
          sum++;
        }
        int j=1;
        while(sum+j<=n){
          sum+=j;
          j++;
        }
        int dist=j;
        int i=1;
        cout<<i<<" ";
        while(k>1){
          if(dist>1){
            i+=dist;
            cout<<i<<" ";
            dist--;
          }
          else{
            i++;
            cout<<i<<" ";
          }
          k--;
        }
        cout<<endl;
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