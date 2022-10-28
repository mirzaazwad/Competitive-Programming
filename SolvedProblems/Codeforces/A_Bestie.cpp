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
            vector<ll>a;
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
                for(int i=0;i<n;i++){
                    ll value;
                    cin>>value;
                    a.push_back(value);
                }
            }
 
            void clearSpace(){
                a.clear();
                n=0;
            }
            void solve(){

                ll min_count=LLONG_MAX;
                 ll value=a[0];
                    for(int i=0;i<n;i++){
                        value=__gcd(value,a[i]);
                    }
                    if(value==1){
                        cout<<0<<endl;
                        return;
                    }
                for(int i=0;i<n;i++){
                    ll temp=a[i];
                    a[i]=__gcd(a[i],(ll)i+1);
                    ll value=a[0];
                    for(int i=0;i<n;i++){
                        value=__gcd(value,a[i]);
                    }
                    if(value==1){
                        min_count=min(min_count,(ll)(n-i));
                    }
                    a[i]=temp;
                }
                cout<<min(min_count,3LL)<<endl;

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