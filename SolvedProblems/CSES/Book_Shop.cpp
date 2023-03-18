#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
using namespace std;

int main()
{
    fastio;
    int n,m;
    cin>>n>>m;
    vector<int>h(n+1),s(n+1);
    for(int i=1;i<=n;i++){
      cin>>h[i];
    }
    for(int i=1;i<=n;i++){
      cin>>s[i];
    }
    vector<vector<int>>dp(n+5,vector<int>(m+5,0));//directly assigning 0 to avoid the bottom commented block
    // for(int i=0;i<=n;i++){
    //   dp[i][0]=0;//have no more books to chose from
    // }
    // for(int j=0;j<=m;j++){
    //   dp[0][j]=0;//have no money to buy books
    // }
    for(int i=1;i<=n;i++){
      for(int j=1;j<=m;j++){
        dp[i][j]=dp[i-1][j];//precalculation from the last loop if the book wasn't taken
        if(j-h[i]>=0)dp[i][j]=max(dp[i][j],s[i]+dp[i-1][j-h[i]]);//precalculation if the book was taken in the last loop
      }
    }
    cout<<dp[n][m]<<endl;
    return 0;
}