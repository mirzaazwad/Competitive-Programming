#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
#define ll long long
using namespace std;
int n1,n2,k1,k2;
ll dp[101][101][11][11];
const ll mod=1e8;

ll possibleArrangements(int i,int j,int k1unit, int k2unit){
  if(k1unit>k1 || k2unit>k2 || i>n1 || j>n2)return 0;
  if(i==n1 && j==n2)return 1;
  if(dp[i][j][k1unit][k2unit]!=-1)return dp[i][j][k1unit][k2unit];
  return dp[i][j][k1unit][k2unit]=(possibleArrangements(i+1,j,k1unit+1,0)%mod+possibleArrangements(i,j+1,0,k2unit+1)%mod)%mod;
}

int main()
{
    fastio;
    memset(dp,-1,sizeof(dp));
    cin >> n1 >> n2 >> k1 >> k2;
    cout<<possibleArrangements(0,0,0,0)<<endl;
    return 0;
}