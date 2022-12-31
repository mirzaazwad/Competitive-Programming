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
      ll n,m;
      vector<bool>free_pos;
      vector<ll>ans;
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
        free_pos.assign(n,true);
        ans.resize(n);
      }
 
      void clearSpace(){
        ans.clear();
        free_pos.clear();
      }

      void solve(){
        int i=0;
        int j=m-1;
        int curr_max=n;
        int curr_min=1;
        int count=0;
        while(j<n){
          if(free_pos[i] && free_pos[j]){
            ans[i]=curr_max--;
            ans[j]=curr_min++;
            free_pos[i++]=false;
            free_pos[j++]=false;
            count+=2;
          }
          else{
            i=j;
            j=j+m-1;
          }
        }
        while(count<n){
          if(free_pos[i]){
            ans[i]=curr_min++;
            count++;
            i++;
          }
        }
        for(int i=0;i<n;i++){
          cout<<ans[i]<<" ";
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