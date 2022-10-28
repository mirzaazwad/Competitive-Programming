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
            vector<int>arr;
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
                vector<int>temp(n);
                for(int &i:temp)cin>>i;
                arr=temp;
            }
 
            void clearSpace(){
                arr.clear();
                n=0;
            }
            void solve(){
                if(n%2!=0){
                    cout<<-1<<endl;
                }
                else{
                    int onecount=0;
                    for(int i=0;i<n;i++){
                        if(arr[i]==1)onecount++;
                    }
                    if(onecount==n){
                        cout<<1<<" "<<n<<endl;
                        return;
                    }
                    vector<pair<int,int>>vp;
                    int i=1;
                    while(i<n){
                        if(arr[i]==arr[i-1]){
                            vp.emplace_back(i-1,i);
                            i+=2;
                        }
                        else{
                            vp.emplace_back(i-1,i-1);
                            vp.emplace_back(i,i);
                            i+=2;
                        }
                    }
                    for(auto u:vp){
                        cout<<u.first+1<<" "<<u.second+1<<endl;
                    }

                }

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