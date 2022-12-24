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
      ll a,b;
      string s;
    public:
      Program(int t=1){
        for(int i=1;i<=t;i++){
          takeInput();
          solve();
          clearSpace();
        }
      }

      ll stringLL(string s){
        ll num=0;
        for(char c:s){
          num=num*10+(c-'0');
        }
        return num;
      }
 
      void takeInput(){
        cin>>s;
        string res1="",res2="";
        bool found=false;
        for(char &c:s){
          if(c=='+'){
            found=true;
            continue;
          }
          if(!found){
            res1.push_back(c);
          }
          else{
            res2.push_back(c);
          }
        }
        a=stringLL(res1);
        b=stringLL(res2);
      }
 
      void clearSpace(){
        s.clear();
      }
      void solve(){
        cout<<a+b<<endl;
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