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
      string s;
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
        cin>>s;
      }

      bool checkNotPossibleCondition(){
        set<char>se;
        for(char c:s){
          se.insert(c);
        }
        return se.size()!=1;
      }
 
      void clearSpace(){
        
      }

      bool isIlluminated(){
        bool lampFound=false;
          vector<bool>illuminated(n,false);
          for(int i=0;i<n;i++){
            if(lampFound){
              illuminated[i] = true;
            }
            if(s[i]=='R'){
              lampFound=true;
            }
          }
          lampFound=false;
          for(int i=n-1;i>=0;i--){
            if(lampFound){
              illuminated[i] = true;
            }
            if(s[i]=='L'){
              lampFound=true;
            }
          }
          int count=0;
          for(int i=0;i<n;i++){
            if(!illuminated[i]){
              count++;
            }
          }
          return count==0;
      }

      void solve(){
        if(!checkNotPossibleCondition()){
          cout<<-1<<endl;
          return;
        }
        else{
          if(isIlluminated()){
            cout<<0<<endl;
            return;
          }
          int OperationsPerformed=0;
          for(int i=0;i<n-1;i++){
            if(s[i]=='L' && s[i+1]=='R'){
              s[i]='R';
              s[i+1]='L';
              OperationsPerformed=i+1;
              break;
            }
          }
          if(isIlluminated()){
            cout<<OperationsPerformed<<endl;
            return;
          }
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