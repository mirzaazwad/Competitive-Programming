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
 
 
namespace ProblemC1{
    class Program{
        private:
            Int n;
            vector<ll>v;
        public:
            Program(Int t){
                for(Int i=1;i<=t;i++){
                    takeInput();
                    solve();
                    clearSpace();
                }
            }
 
            void takeInput(){
                cin>>n;
                for(int i=0;i<n;i++){
                    ll value;
                    cin>>value;
                    v.push_back(value);
                }
            }
 
            void clearSpace(){
                v.clear();
            }
            void solve(){
                ll ans=0;
                Int r=-1;
                for(Int l=0;l<n;l++){
                    while(r+1<n && v[r+1]>r+1-l)r++;
                    ans+=(ll)(r-l+1);
                }
                cout<<ans<<endl;
                
            }
    };
}
signed main()
{
    fastio;
    Int tc;
    cin >> tc;
    ProblemC1::Program program=ProblemC1::Program(tc);
    return 0;
}