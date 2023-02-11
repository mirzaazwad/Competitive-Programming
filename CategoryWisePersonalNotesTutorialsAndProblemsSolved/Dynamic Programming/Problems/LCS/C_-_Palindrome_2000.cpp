#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
string s;
int dp[5005][5005];
int minInsert(int i,int j){
  if(i>j){
    return 0;
  }
  if(dp[i][j]!=-1){
    return dp[i][j];
  }
  if(s[i]==s[j]){
    return dp[i][j]=minInsert(i+1,j-1);
  }
  else{
    return dp[i][j]=min(1+minInsert(i+1,j),1+minInsert(i,j-1));
  }
}

int main()
{
    fastio;
    int n;
    cin>>n;
    cin>>s;
    memset(dp,-1,sizeof(dp));
    cout<<minInsert(0,n-1)<<endl;
    return 0;
}