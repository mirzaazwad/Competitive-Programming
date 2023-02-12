#include <bits/stdc++.h>
#define ll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int n;
vector<ll>arr;
#define N 50009
#define M 105
#define INF 1000007
ll dp[M][N];
//uses Knapsack Algorithm Idea
ll MaxPossibleAmount(int i,ll sum){
  if(i<0){
    return 0;
  }
  if(sum==0){
    return 0;
  }
  if(dp[i][sum]!=-1){
    return dp[i][sum];
  }
  if(arr[i]>sum){
    return dp[i][sum]=MaxPossibleAmount(i-1,sum);
  }
  else return dp[i][sum]=max(arr[i]+MaxPossibleAmount(i-1,sum-arr[i]),MaxPossibleAmount(i-1,sum));
}

int main()
{
    fastio;
    int tc;
    cin>>tc;
    for(int i=0;i<tc;i++){
      memset(dp,-1,sizeof(dp));
      cin>>n;
      arr.resize(n);
      ll sum=0;
      for(ll &i:arr){
        cin>>i;
        sum+=i;
      }
      cout<<sum-2*MaxPossibleAmount(n-1,sum/2)<<endl;
    }
    return 0;
}