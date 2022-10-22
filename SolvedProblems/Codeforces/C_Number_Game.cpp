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
            int n;
            vector<Int>v;
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
                vector<Int>temp(n);
                for(Int &i:temp){
                    cin>>i;
                }
                v=temp;
            }
 
            void clearSpace(){
                v.clear();
                n=0;
            }
            void solve(){
                Int ans;
                for(int k=0;k<=n;++k){
                    multiset<Int>mset(v.begin(),v.end());
                    for(int i=0;i<=k;++i){
                        auto it=mset.upper_bound(k-i);
                        if(it==mset.begin()){
                            break;
                        }
                        mset.erase(--it);
                        if(!mset.empty()){
                            int value=*(mset.begin());
                            mset.erase(mset.begin());
                            mset.insert(value+k-1);
                        }
                    }
                    if(mset.size()+k==n){
                        ans=k;
                    }
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
    Problem::Program program=Problem::Program(tc);
    return 0;
}