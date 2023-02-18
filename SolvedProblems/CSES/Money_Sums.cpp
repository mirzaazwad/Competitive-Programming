#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
using namespace std;

int main()
{
    fastio;
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int &i:arr)cin>>i;
    int MaxSum=n*1000;
    bool dp[n+1][MaxSum+1];
    memset(dp,false,sizeof(dp));
    dp[0][0]=true;
    for(int i=1;i<=n;i++){
      for(int j=0;j<=MaxSum;j++){
        dp[i][j]=dp[i-1][j];
        int left=j-arr[i-1];
        if(left>=0 && dp[i-1][left]){
          dp[i][j]=true;
        }
      }
    }
    vector<int>possible;
    for(int j=1;j<=MaxSum;j++){
      if(dp[n][j]){
        possible.push_back(j);
      }
    }
    cout<<possible.size()<<endl;
    for(int v:possible){
      cout<<v<<" ";
    }
    cout<<endl;
    return 0;
}