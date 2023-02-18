#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
#define ll long long
using namespace std;
ll dp[5005][5005];
int len_a;
int len_b;
string s;
string t;

int main()
{
    fastio;
    cin>>s>>t;
    len_a=s.length();
    len_b=t.length();
    ll dp[len_a+1][len_b+1];
    for(int i=0;i<len_a+1;i++){
      for(int j=0;j<len_b+1;j++){
        dp[i][j]=INT_MAX;
      }
    }
    dp[0][0]=0;
    for(int i=0;i<=len_a;i++){
      for(int j=0;j<=len_b;j++){
        if(i!=0){
          dp[i][j]=min(dp[i][j],dp[i-1][j]+1);
        }
        if(j!=0){
          dp[i][j]=min(dp[i][j],dp[i][j-1]+1);
        }
        if(i!=0 && j!=0){
          dp[i][j]=min(dp[i][j],dp[i-1][j-1]+(ll)(s[i-1]!=t[j-1]));
        }
      }
    }
    cout<<dp[len_a][len_b]<<endl;
    return 0;
}