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
            Int n;
            vector<ll>v;
            Int count;
        public:
            Program(Int t){
                for(Int i=1;i<=t;i++){
                    count=0;
                    takeInput();
                    solve();
                    clearSpace();
                }
            }
 
            void takeInput(){
                cin>>n;
                for(Int i=0;i<n;i++){
                    ll value;
                    cin>>value;
                    v.push_back(value);
                }

            }
 
            void clearSpace(){
                v.clear();
            }

            void swapElements(int x,int& count){
                for(int i=0;i<n;i+=(2*x)){
                    if(v[i+x]<v[i]){
                        for(int j=0;j<x;j++){
                            swap(v[i+j],v[i+j+x]);
                        }
                        count++;
                    }
                }
            }


            void solve(){
                bool lesser=false;
                if(v[0]<v[1]){
                    lesser=true;
                }
                for(Int i=1;i<n;i+=2){
                    if(abs(v[i]-v[i-1])>1){
                        cout<<-1<<endl;
                        return;
                    }
                }
                int count=0;

                for(int i=1;i<n;i=i<<1){
                    swapElements(i,count);
                }

                for(int i=1;i<n;i++){
                    if(v[i]<v[i-1]){
                        cout<<-1<<endl;
                        return;
                    }

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