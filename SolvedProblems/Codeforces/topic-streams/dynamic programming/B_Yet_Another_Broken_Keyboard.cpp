#include <bits/stdc++.h>

#define fastio                      \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL)

#define endl "\n"
#define ll long long
using namespace std;
const int maxn=2e5+5;
vector<int>dp(maxn);

int main()
{
  fastio;
  int n, m;
  cin >> n >> m;
  string s;
  cin >> s;
  bool alp[26]={false};
  for(int i=0;i<m;i++){
    char c;
    cin>>c;
    alp[c-'a']=true;
  }
  vector<int>res(n+1,0);
  ll ans=0;
  ll count=0;
  for(int i=0;i<n;i++){
    if(alp[s[i]-'a']){
      count++;
    }
    else{
      ans+=(count*(count+1))/2;
      count=0;
    }
  }
  ans+=(count*(count+1))/2;
  cout<<ans<<endl;

  return 0;
}