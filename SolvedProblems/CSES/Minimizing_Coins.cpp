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
#define N 10000007
ll dp[N];
 
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
 
 

namespace ProblemMinimisingCoins{
    class Program{
        private:
            int n,m;
            vector<int>coins;
            ll findCoins(ll m){
                if(m<0){
                    return INT_MAX;
                }
                else if(m==0){
                    return 0;
                }
                else{
                    if(dp[m]!=-1){
                        return dp[m];
                    }
                    else{
                        ll Min=INT_MAX;
                        for(int i:coins){
                            Min=min(findCoins(m-i)+1,Min);
                        }
                        dp[m]=Min;
                        return dp[m];
                    }
                }
            }

        public:
            Program(int t=1){
                memset(dp,-1,sizeof(dp));
                for(int i=1;i<=t;i++){
                    takeInput();
                    solve();
                    clearSpace();
                }
            }
 
            void takeInput(){
                cin>>n>>m;
                for(int i=0;i<n;i++){
                    int value;
                    cin>>value;
                    coins.push_back(value);
                }
                sort(coins.rbegin(),coins.rend());
            }
 
            void clearSpace(){
                coins.clear();
            }
            void solve(){
                ll ans=findCoins(m);
                ans=ans==INT_MAX?-1:ans;
                cout<<ans<<endl;
            }
    };
}


signed main()
{
    fastio;
    ProblemMinimisingCoins::Program program=ProblemMinimisingCoins::Program();
    return 0;
}