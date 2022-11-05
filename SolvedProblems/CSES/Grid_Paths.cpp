#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
#define ll long long

using namespace std;

char arr[1001][1001];
int dp[1001][1001];
const ll mod = 1e9 + 7;

ll countWays(int x,int y,int ei,int ej){
    if(x>ei || y>ej || arr[x][y]=='*' || arr[ei][ej]=='*'){
        return 0;
    }
    else if(x==ei && y==ej){
        return 1;
    }
    else{
        if(dp[x][y]!=-1){
            return dp[x][y];
        }
        else return dp[x][y]=(countWays(x,y+1,ei,ej)+countWays(x+1,y,ei,ej))%mod;
    }
}


int main()
{
    fastio;
    int n;
    cin>>n;
    memset(dp,-1,sizeof(dp));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<countWays(0,0,n-1,n-1)<<endl;
    return 0;
}