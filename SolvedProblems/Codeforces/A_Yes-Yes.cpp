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
                int n=s.size();
                for(int i=0;i<n;i++){
                    if(s[i]!='Y' && s[i]!='e' && s[i]!='s'){
                        cout<<"NO"<<endl;
                        return;
                    }
                }
                n+=2;
                s="0"+s+"0";
                for(int i=1;i<n-1;i++){
                    if(s[i]=='Y' && (s[i+1]!='e' && s[i+1]!='0')){
                        cout<<"NO"<<endl;
                        return;
                    }
                    if(s[i]=='e' && (s[i+1]!='s' && s[i+1]!='0')){
                        cout<<"NO"<<endl;
                        return;
                    }
                    if(s[i]=='s' && (s[i+1]!='Y' && s[i+1]!='0')){
                        cout<<"NO"<<endl;
                        return;
                    }

                }
                cout<<"YES"<<endl;
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