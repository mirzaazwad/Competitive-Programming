#include <bits/stdc++.h>
 
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
 
#define endl "\n"
 
using namespace std;
#define N 100005
#define ll long long
vector<vector<int>>v(N,vector<int>(3));
 ll dp[N][3][3][3];
int n;
ll findMaxHappiness(int i,int a,int b,int c)
{
  if(a>=2 || b>=2 || c>=2){
    return -INT_MAX;
  }
  if(i==n){
    return 0;
  }
  if(dp[i][a][b][c]!=-1){
    return dp[i][a][b][c];
  }
  dp[i][a][b][c]=max(dp[i][a][b][c],v[i][0]+findMaxHappiness(i+1,a+1,0,0));
  dp[i][a][b][c]=max(dp[i][a][b][c],v[i][1]+findMaxHappiness(i+1,0,b+1,0));
  dp[i][a][b][c]=max(dp[i][a][b][c],v[i][2]+findMaxHappiness(i+1,0,0,c+1));
  return dp[i][a][b][c];
}
 
 
int main()
{
    fastio;
    cin>>n;
    memset(dp,-1,sizeof(dp));
    for(int i=0;i<n;i++){
      cin>>v[i][0]>>v[i][1]>>v[i][2];
    }
    cout<<findMaxHappiness(0,0,0,0)<<endl;
    return 0;
}