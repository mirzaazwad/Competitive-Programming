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
      ll matrix[2][2];
    public:
      Program(int t=1){
        for(int i=1;i<=t;i++){
          takeInput();
          solve();
          clearSpace();
        }
      }
 
      void takeInput(){
        for(int i=0;i<2;i++){
          for(int j=0;j<2;j++){
            cin>>matrix[i][j];
          }
        }
      }
 
      void clearSpace(){
        memset(matrix,0,sizeof(matrix));
      }
      void solve(){
        bool row1=false,row2=false,col1=false,col2=false;
        if(matrix[0][0]<matrix[0][1])row1=true;
        if(matrix[1][0]<matrix[1][1])row2=true;
        if(matrix[0][0]<matrix[1][0])col1=true;
        if(matrix[0][1]<matrix[1][1])col2=true;
        if(row1 && !row2 || !row1 && row2){
          cout<<"NO"<<endl;
        }
        else if(col1 && !col2 || !col1 && col2){
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