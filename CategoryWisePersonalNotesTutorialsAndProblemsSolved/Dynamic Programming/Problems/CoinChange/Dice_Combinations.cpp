#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll dice[6]={1,2,3,4,5,6};
ll dp[1000005];
const ll mod=1000000007;

ll sum(int n){
  if(n<0){
    return 0;
  }
  if(n==0){
    return 1;
  }
  if(dp[n]!=-1){
    return dp[n];
  }
  dp[n]=0;
  for(int i=1;i<=6;i++){
    dp[n]+=sum(n-i);
  }
  return dp[n]%mod;
}

int main(void){
  int n;
  cin>>n;
  memset(dp,-1,sizeof(dp));
  cout<<sum(n)<<endl;
}