//In the name of Allah, The Lord of Mercy, The Giver of Mercy
//Author: Mirza Mohammad Azwad
//Institution: Islamic University of Technology
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h> 
#define ll int64_t
#define Short int16_t
#define Int int32_t
#define endl "\n"
 
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
 
 

namespace Problem{
    class Program{
        private:
            int N,M;
            vector<Int>S;
        public:
            Program(Int t){
                for(Int i=1;i<=t;i++){
                    takeInput();
                    solve();
                    clearSpace();
                }
            }
 
            void takeInput(){
                cin>>N>>M;
                for(int i=0;i<M;i++){
                    Int value;
                    cin>>value;
                    S.push_back(value);
                }
            }
 
            void clearSpace(){
                S.clear();
            }
            void solve(){
                ll sum=0;
                for(auto u:S){
                    sum+=u;
                }
                cout<<(sum%N)<<endl;
            }
    };
}
signed main()
{
    fastio;
    Problem::Program program=Problem::Program(1);
    return 0;
}