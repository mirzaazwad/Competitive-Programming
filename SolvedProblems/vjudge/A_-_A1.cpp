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
      vector<string>s;
      map<string,vector<string>>mp;
      map<string,int>position;
      map<int,string>position_str;
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
        cin.ignore();
        s.resize(n);
        int count=1;
        for(int i=0;i<n;i++){
          getline(cin,s[i]);
          string start="";
          string end="";
          bool found=false;
          for(int j=0;j<s[i].length();j++){
            if(s[i][j]==' '){
              found=true;
            }
            if(found && s[i][j]!=' '){
              end.push_back(s[i][j]);
            }
            else{
              if(s[i][j]!=' '){
                start.push_back(s[i][j]);
              }
            }
          }
          mp[start].push_back(end);
          if(position[start]==0){
            position[start]=count++;
          }
        }

        for(auto u:position){
          position_str[u.second]=u.first;
        }
      }
 
      void clearSpace(){
        mp.clear();
      }
      void solve(){
        int count=0;
        for(auto u:position_str){
          cout<<u.second<<" "<<mp[u.second].front()<<endl;
          count++;
          if(count==12)break;
        }
      }
  };
}
signed main()
{
  fastio;
  Problem::Program program=Problem::Program();
  return 0;
}