#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
#define ll long long
using namespace std;

vector<vector<ll>>dp;
const ll mod=1e9+7;
int n;
int target; 

ll findSets(int i,ll sum){
  if(i<1){
    return 0;
  }
  if(sum==0){
    return 0;
  }
  if(dp[sum][i]!=0){
    return dp[sum][i];
  }
  if(sum-i>=0)
    return dp[sum][i]=max((1+(findSets(i-1,sum-i)%mod))%mod,findSets(i-1,sum));
  else return 0;
}

void setDPArray(int n,int target){
  for(int i=0;i<=target;i++){
    vector<ll>temp(n+1,0);
    dp.push_back(temp);
  }
}


int main()
{
    fastio;
    cin>>n;
    target=(n*(n+1))/2;
    if(target%2){
      cout<<0<<endl;
      return 0;
    }
    target/=2;
    setDPArray(n+1,target+1);
    cout<<findSets(n,target)<<endl;
    return 0;
}