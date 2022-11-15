// In the name of Allah, The Lord of Mercy, The Giver of Mercy
// Author: Mirza Mohammad Azwad
// Institution: Islamic University of Technology
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#define ll int64_t
#define short int16_t
#define int int32_t
#define endl "\n"

using namespace std;
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

namespace Problem
{
    class Program
    {
    private:
        int n,m;
        char grid[50][50];
        bool visited[50][50];
    public:
        Program(int t = 1)
        {
            for (int i = 1; i <= t; i++)
            {
                takeInput();
                solve();
                clearSpace();
            }
        }

        void takeInput()
        {
            cin>>n>>m;
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    cin>>grid[i][j];
                }
            }
            memset(visited,false,sizeof(visited));
        }

        void clearSpace()
        {
            memset(grid,'\0',sizeof(grid));
        }
        
        void Fill(vector<pair<int,int>>water){
            for(auto u:water){
                FillWater(u.first,u.second);
            }
        }

        void FillWater(int i,int j){
            if(i>n-1  || i<0 || j>m-1 || j<0 || grid[i][j]=='#' || grid[i][j]=='\0'){
                return;
            }
            grid[i][j]='V';
            visited[i][j] = true;
            if(grid[i+1][j]=='#'){
                if(!visited[i][j+1])FillWater(i,j+1);
                if(!visited[i][j-1])FillWater(i,j-1);
            }
            if(grid[i+1][j]!='#'){
                
                FillWater(i+1,j);
            }
        }

        void solve()
        {
            vector<pair<int,int>>air,water,stone;
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    if(grid[i][j]=='V'){
                        water.emplace_back(i,j);
                    }
                    else if(grid[i][j]=='#'){
                        stone.emplace_back(i,j);
                    }
                    else{
                        air.emplace_back(i,j);
                    }
                }
            }
            Fill(water);
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    cout<<grid[i][j];
                }
                cout<<endl;
            }
            
        }
    };
}
signed main()
{
    fastio;
    Problem::Program program = Problem::Program();
    return 0;
}