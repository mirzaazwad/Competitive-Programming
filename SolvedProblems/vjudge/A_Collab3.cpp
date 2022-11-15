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
                cin.ignore();
                for(int i=1;i<=t;i++){
                    takeInput();
                    solve();
                }
            }
 
            void takeInput(){
                getline(cin,s);
            }
 
            void solve(){
                bool alp[26]={false};
                for(char &c:s){
                    if(tolower(c)-'a'>=0 && tolower(c)-'a'<26)alp[tolower(c)-'a']=true;
                }
                bool pangram=true;
                vector<char>missing;
                for(int i=0;i<26;i++){
                    if(!alp[i]){
                        pangram=false;
                        missing.push_back(i+'a');
                    }
                }
                if(pangram){
                    cout<<"pangram"<<endl;
                }
                else{
                    cout<<"missing"<<" ";
                    for(auto u:missing){
                        cout<<u;
                    }
                    cout<<endl;
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