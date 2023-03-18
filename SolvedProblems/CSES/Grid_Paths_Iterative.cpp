#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
#define ll long long
using namespace std;

int main()
{
    fastio;
    vector<string>grid;
    int n;
    cin>>n;
    vector<vector<int>>dp(n+1,vector<int>(n+1,0));
    for(int i=0;i<n;i++){
      string a;
      cin>>a;
      grid.push_back(a);
    }
    if(grid[0][0]!='*'){
      dp[0][0]=1;
    }
    for(int i=1;i<n;i++){
      if(grid[i-1][0]!='*')dp[i][0]=dp[i-1][0];
      if(grid[0][i-1]!='*')dp[0][i]=dp[0][i-1];
    }
    for(int i=1;i<n;i++){
      for(int j=1;j<n;j++){
        if(grid[i][j]!='*'){
          if(grid[i-1][j]!='*')dp[i][j]+=(dp[i-1][j]%((ll)1e9+7));
          if(grid[i][j-1]!='*')dp[i][j]+=(dp[i][j-1]%((ll)1e9+7));
        }
        dp[i][j]=(dp[i][j]%((ll)1e9+7));
      }
    }
    cout<<(grid[n-1][n-1]!='*'?dp[n-1][n-1]:0)<<endl;
    return 0;
}