#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
#define ll long long
using namespace std;
vector<int>mask_arr;
vector<int>cost;
int n;
int dp[(1<<3)+5][1005];//basically dp[mask][n] as in max n and max mask



void addToMask(){//compute mask array
  int m;
  cin>>m;
  cost.push_back(m);
  string s;
  int num=0;
  cin>>s;
  for(auto u:s){
    num+=(1<<(u-'A'));
  }
  mask_arr.push_back(num);
}

long long min_cost(int cmask,int i){//cmask means current mask
  if(cmask==((1<<3)-1)){//cmask being 7 means all 3 vitamins found, basically 2^2 + 2^1 +2^0=7
    return 0;
  }
  if(i==n){
    return INT_MAX; //this is essentially to eliminate paths where the mask does not show all vitamins selected
  }
  if(dp[cmask][i]!=-1){
    return dp[cmask][i];
  }
  return dp[cmask][i]=min(min_cost(cmask,i+1),cost[i]+min_cost(cmask|mask_arr[i],i+1));//basically if you take a particular drink, you bitwise or the mask
  //with the current mask and this will help you determine whether or not that drink's vitamins have been added
  //if you get 7 as mentioned earlier, you get all the vitamins, this traverses all the possible options and finds the best combination
  //where you get all the vitamins required
}




int main()
{
    fastio;
    cin>>n;
    for(int i=0;i<n;i++){//creates mask_array for every string and hence generates a mask_array array essentially
      addToMask();
    }
    memset(dp,-1,sizeof(dp));
    //after creating the mask_array array we compute the result as a series of choices, nibo ki nibona
    ll ans=min_cost(0,0);
    cout<<(ans>=INT_MAX?-1:ans)<<endl;

    return 0;
}