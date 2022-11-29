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
            ll n,c,d;
            vector<ll>a;
            vector<ll>prefix;
            unordered_set<ll>s;
            unordered_set<ll>s2;
        public:
            Program(int t=1){
                for(int i=1;i<=t;i++){
                    takeInput();
                    solve();
                    clearSpace();
                }
            }
 
            void takeInput(){
                cin>>n>>c>>d;
                a.assign(n,0);
                prefix.assign(n,0);
                for(ll &i:a){
                    cin>>i;
                    s.insert(i);
                }
            }
 
            void clearSpace(){
                a.clear();
                n=0,c=0,d=0;
            }

            void solve(){
                sort(a.begin(),a.end(),greater<ll>());
                partial_sum(a.begin(),a.end(),prefix.begin(),prefix.end());
                for(ll i:prefix){
                    s2.insert(i);
                }
                if(a.front()*d<c){
                    cout<<"Impossible"<<endl;
                }
                else if(a.front()>=c){
                    cout<<"Infinity"<<endl;
                }
                else{
                    int ix=lower_bound(prefix.begin(),prefix.end(),c)-prefix.begin();
                    int k=0;
                    while(ix>0){
                        
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