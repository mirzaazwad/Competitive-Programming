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
  vector<ll>arr(n);
  for(ll &i:arr)cin>>i;
  bool found=false;
  for(int i=0;i<n-1;i++){
    if(arr[i]==-1 && arr[i+1]==-1){
      arr[i]=1;
      arr[i+1]=1;
      found=true;
      break;
    }
  }
  for(int i=0;i<n;i++){
    if(arr[i]==-1){
      found=true;
    }
  }
  ll sum=accumulate(arr.begin(),arr.end(),0LL);
  if(!found){
    cout<<sum-4<<endl;
    return;
  }
  cout<<sum<<endl;


}

int main()
{
    fastio;
    int t;
    cin >> t;
    
    while(t--)
    {
       solve();
    }
    return 0;
}