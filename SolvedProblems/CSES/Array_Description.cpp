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
            vector<int>arr;
            int n,m;
            const ll mod= 1e9 + 7;
        public:
            int countSubArray(){
                int max_start=0;
                int count=0;
                int max_end=0;
                for(int i=1;i<n;i++){
                    int max_len=max_end-max_start;
                    count+=(max_len*(max_len+1))/2;
                    if(abs(arr[i-1]-arr[i])>1){
                        max_end=i-max_start;
                        max_start=i;
                        count+=((max_end*(max_end+1))/2);
                    }
                }
                int max_len=max_end-max_start;
                count+=(max_len*(max_len+1))/2;
                return count;
            }

            Program(int t=1){
                for(int i=1;i<=t;i++){
                    takeInput();
                    solve();
                    clearSpace();
                }
            }
 
            void takeInput(){
                cin>>n>>m;
                arr.resize(n);
                for(int &i:arr)cin>>i;
            }
 
            void clearSpace(){
                arr.clear();
            }
            void solve(){
                cout<<countSubArray()<<endl;
            }
    };
}
signed main()
{
    fastio;
    Problem::Program program=Problem::Program();
    return 0;
}