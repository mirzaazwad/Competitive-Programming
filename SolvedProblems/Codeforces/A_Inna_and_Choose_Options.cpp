//In the name of Allah, The Lord of Mercy, The Giver of Mercy
//Author: Mirza Mohammad Azwad
//Institution: Islamic University of Technology(IUT)
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
                cin>>s;
            }
 
            void clearSpace(){
                s.clear();
            }
            void solve(){
                set<pair<ll,ll>>ans;
                for(int i=1;i<=12;i++){
                    if(!(12%i)){
                        int counter=0;
                        for(int j=0;j<i;j++){
                            bool found=true;
                            for(int k=j;k<12;k+=i){
                                if(s[k]!='X')found=false;
                            }
                            if(found)counter++;
                            if(counter==1)ans.insert({12/i,i});
                        }
                    }
                }
                int ans_length=ans.size();
                if(ans_length){
                    cout<<ans_length<<" ";
                    for(auto u:ans){
                        cout<<u.first<<"x"<<u.second<<" ";
                    }
                    cout<<endl;
                }
                else{
                    cout<<0<<endl;
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