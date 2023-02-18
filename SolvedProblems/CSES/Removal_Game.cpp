#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
#define ll long long
using namespace std;
#define N 5005
int n;
vector<ll>arr;
vector<ll>prefix;
ll dp[N][N];

ll sum(int i,int j){
  return prefix[j]-prefix[i-1];
}

ll CalcMaxScore(int i,int j){
  if(dp[i][j]!=-1)return dp[i][j];
  if(i==j)return arr[i];
  else return dp[i][j]=max(arr[i]+sum(i+1,j)-CalcMaxScore(i+1,j),arr[j]+sum(i,j-1)-CalcMaxScore(i,j-1));
}

int main()
{
    fastio;
    cin>>n;
    arr.resize(n+1);
    prefix.assign(n+1,0);
    for(int i=1;i<=n;i++){
      cin>>arr[i];
    }
    memset(dp,-1,sizeof(dp));
    partial_sum(arr.begin(),arr.end(),prefix.begin());
    cout<<CalcMaxScore(1,n)<<endl;
    return 0;
}