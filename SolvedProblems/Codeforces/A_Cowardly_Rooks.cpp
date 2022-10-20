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
            int n,m;
            bool grid[8][8];
            vector<pair<int,int>>pos;
        public:
            Program(Int t){
                for(Int i=1;i<=t;i++){
                    takeInput();
                    solve();
                    clearSpace();
                }
            }
 
            void takeInput(){
                cin>>n>>m;
                memset(grid,false,sizeof(grid));
                for(int i=0;i<m;i++){
                    pair<int,int>p;
                    cin>>p.first>>p.second;
                    grid[p.first-1][p.second-1]=true;
                    pos.push_back(p);

                }

            }
 
            void clearSpace(){
                pos.clear();
            }
            void solve(){
                for(auto u:pos){
                    int x=u.first-1;
                    int y=u.second-1;
                    for(int i=0;i<n;i++){
                        grid[x][i]=true;
                        grid[i][y]=true;
                    }
                }
                for(int i=0;i<n;i++){
                    for(int j=0;j<n;j++){
                        if(!grid[i][j]){
                            cout<<"YES"<<endl;
                            return;
                        }
                    }
                }
                cout<<"NO"<<endl;
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