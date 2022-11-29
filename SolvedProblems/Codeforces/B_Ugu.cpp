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
            string str;
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
                cin>>str;
            }
 
            void clearSpace(){
                
            }
            void solve(){
                int leftmostZeros=0;
                for(int i=0;i<n;i++){
                    if(str[i]=='0'){
                        leftmostZeros++;
                    }
                    else break;
                }
                if(leftmostZeros==n){
                    cout<<0<<endl;
                    return;
                }
                int count=0;
                for(int i=leftmostZeros+1;i<n;i++){
                    count+=(str[i]!=str[i-1]);//the number of zeros in between the leftmost one and end needs to be replaced
                }
                cout<<count<<endl;

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