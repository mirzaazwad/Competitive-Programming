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
            int m,s;
            vector<int>arr;
        public:
            Program(int t=1){
                for(int i=1;i<=t;i++){
                    takeInput();
                    solve();
                    clearSpace();
                }
            }
 
            void takeInput(){
                cin>>m>>s;
                arr.resize(m);
                for(int &i:arr){
                    cin>>i;
                }
            }
 
            void clearSpace(){
                arr.clear();
            }
            void solve(){
                sort(arr.begin(),arr.end());
                int j=1;
                int sum=0;
                for(int i=0;i<m;i++){
                    while(arr[i]!=j){
                        sum+=j;
                        j++;
                    }
                    j++;
                }
                if(sum<s){
                    for(int i=j;sum<s;i++){
                        sum+=i;
                    }
                }
                if(sum==s){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
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