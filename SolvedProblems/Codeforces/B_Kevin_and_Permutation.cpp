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
            }
 
            void clearSpace(){
                n=0;
            }
            void test(){
                vector<int>arr(n);
                for(int i=1;i<=n;i++){
                    arr[i-1]=i;
                }
                vector<int>temp;
                temp=arr;
                int Max=INT_MIN;
                while(next_permutation(arr.begin(),arr.end())){
                    int LocalMax=INT_MAX;
                    for(int i=1;i<n;i++){
                        LocalMax=min(LocalMax,abs(arr[i]-arr[i-1]));
                    }
                    if(LocalMax>Max){
                        Max=LocalMax;
                        temp=arr;
                    }
                }
                cout<<n<<": ";
                for(auto u:temp)cout<<u<<" ";
                
                cout<<endl;
            }

            void solve(){
                if(n<=3){
                    for(int i=1;i<=n;i++)cout<<i<<" ";
                    cout<<endl;
                    return;
                }
                int diff=n/2;
                for(int i=diff;i>0;i--){
                    cout<<i<<" ";
                    for(int j=i+diff;j<=n;j+=diff){
                        cout<<j<<" ";
                    }
                }
                cout<<endl;
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