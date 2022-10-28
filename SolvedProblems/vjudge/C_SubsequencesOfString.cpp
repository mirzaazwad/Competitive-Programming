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
 const int maxn = 712;
 

namespace Problem{
    class Program{
        private:
            string s,t;
        public:
            
           int C(int n, int k) {
                int res = 1;
                for (int i = n - k + 1; i <= n; ++i)
                    res *= i;
                for (int i = 2; i <= k; ++i)
                    res /= i;
                return res;
            }

            Program(int t=1){
                for(int i=1;i<=t;i++){
                    takeInput();
                    solve();
                    clearSpace();
                }
            }
 
            void takeInput(){
                getline(cin,s);
                getline(cin,t);
            }
 
            void clearSpace(){
                s.clear();
                t.clear();
            }
            void solve(){
                map<char,int>s_count,t_count;
                for(char character:s){
                    s_count[character]++;
                }
                set<char>char_in_t;
                for(char character:t){
                    t_count[character]++;
                    char_in_t.insert(character);
                }

                int sum=0;
                for(char character:char_in_t){
                    sum+=(C(s_count[character],t_count[character]));
                }
                cout<<sum<<endl;

            }
    };
}
signed main()
{
    fastio;
    Problem::Program program=Problem::Program();
    return 0;
}