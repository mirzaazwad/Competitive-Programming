//In the name of Allah, The Lord of Mercy, The Giver of Mercy
//Author: Mirza Mohammad Azwad
//Institution: Islamic University of Technology
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <iostream>
#include<set>
#define ll int64_t
#define short int16_t
#define int int32_t
#define endl "\n"
 
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
 
 

namespace Problem{
    class Program{
        private:
            int n,m;
            string a;
            const ll mod= 1e9 + 7;
        public:
            Program(int t=1){
                for(int i=1;i<=t;i++){
                    takeInput();
                    solve();
                    clearSpace();
                }
            }
 
            void takeInput(){
                cin>>n>>m;
                cin>>a;
            }
 
            void clearSpace(){
                a.clear();   
            }
            void solve(){
                set<int>s;
                int i;
                ll hash[n];
                int segmentStart=0,segmentEnd=n-1;
                int B,Shift;
                B=Shift=1;
                bool found=false;
                for(i=1;i<=n;i++){
                    if(i-1==0){
                        hash[i-1]=a[i-1]-'a'+1;
                        B=31;
                        continue;
                    }
                    hash[i-1]=(((hash[i-2]%mod)*(B%mod))%mod+(a[i-1]-'a'+1)%mod)%mod;
                    if(i%m==0){
                        segmentEnd=i-1;
                        s.insert(hash[segmentEnd]-((hash[segmentStart]%mod)*(Shift%mod))%mod);
                        segmentStart=i;
                        found=true;
                    }
                    if(!found){
                        Shift=1;
                    }
                    else{
                        Shift*=31;
                    }
                }
                for(auto u:hash){
                    cout<<u<<" ";
                }
                cout<<endl;
                for(auto u:s){
                    cout<<u<<" ";
                }
                cout<<endl;
                cout<<s.size()<<endl;
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