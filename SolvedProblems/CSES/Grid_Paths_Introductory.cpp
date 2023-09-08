#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL); \
    cout.tie(NULL)

#define endl "\n"
typedef long long ll;
using namespace std;
string route;
ll ans = 0;
const int N = 7;
bool visited[N][N];

ll dirx[4] = {0, 0, 1, -1};
ll diry[4] = {1, -1, 0, 0};

bool valid(int row, int col)
{
    if (row >= 0 && row < N && col >= 0 && col < N && !visited[row][col])
    {
        return true;
    }
    return false;
}

bool noForwardMove(int row, int col)
{
    if (((row + 1 == N || (visited[row - 1][col] && visited[row + 1][col])) && col - 1 >= 0 && col + 1 < N && !visited[row][col - 1] && !visited[row][col + 1]))
    {
        return true;
    }
    if (((col + 1 == N || (visited[row][col - 1] && visited[row][col + 1])) && row - 1 >= 0 && row + 1 < N && !visited[row - 1][col] && !visited[row + 1][col]))
    {
        return true;
    }
    if (((row == 0 || (visited[row + 1][col] && visited[row - 1][col])) && col - 1 >= 0 && col + 1 < N && !visited[row][col - 1] && !visited[row][col + 1]))
    {
        return true;
    }
    if (((col == 0 || (visited[row][col + 1] && visited[row][col - 1])) && row - 1 >= 0 && row + 1 < N && !visited[row - 1][col] && !visited[row + 1][col]))
    {
        return true;
    }
    return false;
}

void fixedPath(int row,int col,int index);

void move(int row, int col, int index)
{
    if (row == N - 1 && col == 0)
    {
        ans+=(index==48);
        return ;
    }
 
    if(noForwardMove(row,col)){
        return;
    }
 
    visited[row][col] = true;
 
    if (route[index]=='?')
    {
        for(int k=0;k<4;k++){
            int x=row+dirx[k];
            int y=col+diry[k];
            if(valid(x,y)){
                move(x,y,index+1);
            }
        }
    }
    else{
        fixedPath(row,col,index);
    }
    visited[row][col] = false;
}

void fixedPath(int row,int col, int index){
    if(route[index]=='U'){
            if(valid(row-1,col))move(row - 1, col,  index+1);
        }
        else if(route[index]=='R'){
            if(valid(row,col+1))move(row, col + 1,  index+1);
        }
 
        else if(route[index]=='D'){
            if(valid(row+1,col))move(row + 1, col,  index+1);
        }
 
        else if(route[index]=='L'){
            if(valid(row,col-1))move(row, col - 1,  index+1);
        }
}
 
 
int main()
{
    fastio;
    cin >> route;
    move(0, 0, 0);
    cout << ans<<endl;
    return 0;
}