#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int MagicGrid(vector<vector<int>>input,int m,int n){
    int dp[m][n];
    dp[m-1][n-1]=1;
    for(int i=n-2;i>=0;i--){
        dp[m-1][i]=dp[m-1][i+1]-input[m-1][i];
    }
    for(int i=m-2;i>=0;i--){
        dp[i][n-1]=dp[i+1][n-1]-input[i][n-1];
    }

    for(int i=m-2;i>=0;i--){
        for(int j=n-2;j>=0;j--){
            dp[i][j]=abs(min(dp[i+1][j],dp[i][j+1]))-input[i][j];
        }
    }
    return dp[0][0];

}

void solve(){
    vector<vector<int>>v;
   int n,m;
   cin>>n>>m;
   for(int i=0;i<n;i++){
    vector<int>temp;
    for(int j=0;j<m;j++){
        int value;
        cin>>value;
        temp.push_back(value);
    }
    v.push_back(temp);
   }
   cout<<MagicGrid(v,n,m)<<endl;
}

int main()
{
    fastio;
    int tc;
    cin>>tc;
    while(tc--)solve();
    return 0;
}