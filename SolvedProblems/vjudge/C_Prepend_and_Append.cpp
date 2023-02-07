#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
void solve(){
  int n;
  cin>>n;
  string s;
  cin>>s;
  int count=0;
  for(int i=0;i<n/2;i++){
    if(s[i]!=s[n-i-1]){
      count++;
    }
    else break;
  }
  cout<<n-count*2<<endl;
}

int main()
{
    fastio;
    int t;
    cin>>t;
    while(t--){
      solve();
    }
    return 0;
}