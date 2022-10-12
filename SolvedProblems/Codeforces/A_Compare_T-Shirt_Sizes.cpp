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
            string a,b;
        public:
            Program(Int t){
                for(Int i=1;i<=t;i++){
                    takeInput();
                    solve();
                    // clearSpace();
                }
            }
 
            void takeInput(){
                cin>>a>>b;
            }
 
            // void clearSpace(){
            //     a.clear();
            //     b.clear();
            // }
            void solve(){
                int res_A;
                int a_length=a.length();
                if(a.find("S")<a_length){
                    res_A=-1;
                    for(int i=0;i<a_length;i++){
                        if(a[i]=='X')res_A--;
                    }
                }
                else if(a.find("M")<a_length){
                    res_A=1;
                }
                else{
                    res_A=2;
                    for(int i=0;i<a_length;i++){
                        if(a[i]=='X')res_A++;
                    }
                }

                int res_B;
                int b_length=b.length();
                if(b.find("S")<b_length){
                    res_B=-1;
                    for(int i=0;i<b_length;i++){
                        if(b[i]=='X')res_B--;
                    }
                }
                else if(b.find("M")<b_length){
                    res_B=1;
                }
                else{
                    res_B=2;
                    for(int i=0;i<b_length;i++){
                        if(b[i]=='X')res_B++;
                    }
                }

                if(res_A<res_B){
                    cout<<"<"<<endl;
                }
                else if(res_A>res_B){
                    cout<<">"<<endl;
                }
                else{
                    cout<<"="<<endl;
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