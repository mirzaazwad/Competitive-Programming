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
            int n;
            vector<string>sounds;
            map<string,char>mp;
        public:
            Program(int t=1){
                for(int i=1;i<=t;i++){
                    takeInput();
                    solve();
                    clearSpace();
                }
            }
 
            void takeInput(){
                cin>>n;
                sounds.resize(n);
                for(string &i:sounds)cin>>i;
                mp["clank"]='a';
                mp["bong"]='b';
                mp["click"]='c';
                mp["tap"]='d';
                mp["poing"]='e';
                mp["clonk"]='f';
                mp["clack"]='g';
                mp["ping"]='h';
                mp["tip"]='i';
                mp["cloing"]='j';
                mp["tic"]='k';
                mp["cling"]='l';
                mp["bing"]='m';
                mp["pong"]='n';
                mp["clang"]='o';
                mp["pang"]='p';
                mp["clong"]='q';
                mp["tac"]='r';
                mp["boing"]='s';
                mp["boink"]='t';
                mp["cloink"]='u';
                mp["rattle"]='v';
                mp["clock"]='w';
                mp["toc"]='x';
                mp["clink"]='y';
                mp["tuc"]='z';
                mp["whack"]=' ';
                mp["bump"]='$';
                mp["pop"]='%';
                mp["dink"]='@';
                mp["thumb"]='#';
            }
 
            void clearSpace(){
                sounds.clear();
            }
            void solve(){
                string ans;
                bool capsLock=false;
                bool shift=false;
                for(string u:sounds){
                    char s;
                    if(mp[u]=='$'){
                        capsLock=capsLock^true;
                        continue;
                    }
                    if(mp[u]=='@'){
                        shift=true;
                        continue;
                    }
                    if(mp[u]=='#'){
                        shift=false;
                        continue;
                    }
                    if(mp[u]=='%'){
                        ans.pop_back();
                        continue;
                    }
                    s=mp[u];
                    if(capsLock){
                        s=toupper(s);
                    }
                    if(shift){
                        if(s==toupper(s)){
                            s=tolower(s);
                        }
                        else{
                            s=toupper(s);
                        }
                    }
                    ans.push_back(s);
                }
                cout<<ans<<endl;
            }
    };
}
signed main()
{
    fastio;
    Problem::Program program=Problem::Program();
    return 0;
}