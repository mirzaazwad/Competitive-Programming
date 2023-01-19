#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
#define ll long long
using namespace std;

void solve(){
  int n;
  cin>>n;
  vector<int>arr(n);
  for(int &i:arr)cin>>i;
  int num1=count(arr.begin(),arr.end(),1);
  if((n-num1)%2==0){
    cout<<"YES"<<endl;
  }
  else{
    cout<<"NO"<<endl;
  }
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