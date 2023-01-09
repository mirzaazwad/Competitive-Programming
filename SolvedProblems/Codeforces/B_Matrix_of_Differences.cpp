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
      ll n;
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
      }
 
      void clearSpace(){
        
      }
      void solve(){
        deque<ll>dq;
        for(ll i=1;i<=n*n;i++){
          dq.push_back(i);
        }
        int count=1;
        bool shift=true;
        bool shift2=true;
        vector<vector<ll>>res;
        vector<ll>temp;
        while(!dq.empty()){
          if(shift && shift2){
            temp.push_back(dq.front());
            dq.pop_front();
            shift=shift^true;
          }
          else{
            temp.push_back(dq.back());
            dq.pop_back();
            shift=shift^true;
          }
          if(count%n==0){
            res.push_back(temp);
            temp.clear();
          }
          count++;
        }
        for(int i=0;i<n;i++){
          if(i%2){
            reverse(res[i].begin(),res[i].end());
          }
        }
        for(int i=0;i<n;i++){
          for(int j=0;j<n;j++){
            cout<<res[i][j]<<" ";
          }
          cout<<endl;
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