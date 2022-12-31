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
      string binary;
      vector<bool>win_condition;
      int player1;
      int player0;

    public:
      Program(int t=1){
        for(int i=1;i<=t;i++){
          player1=0;
          player0=0;
          takeInput();
          solve();
          clearSpace();
        }
      }
 
      void takeInput(){
        cin>>n;
        cin>>binary;
        win_condition.push_back(false);
        for(char &c:binary){
          c=='0'?win_condition.push_back(false):win_condition.push_back(true);
        }
      }
 
      void clearSpace(){
        win_condition.clear();
      }

      void solve(){
        for(int i=1;i<n;++i){
          if(win_condition[i]){
            player0=i;
            cout<<player1+1<<" ";
          }
          else{
            player1=i;
            cout<<player0+1<<" ";
          }
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