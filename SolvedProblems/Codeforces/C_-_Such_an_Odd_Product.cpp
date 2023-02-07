#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

void solve(){
  int n;
  cin>>n;
  vector<int>arr(n);
  for(int &i:arr)cin>>i;
  int count=0;
  int oddcnt=0;
  for(int i=0;i<n-1;i++){
    if(arr[i]%2!=0){
      oddcnt++;
    }
  }
  if(oddcnt==n){
    cout<<0<<endl;
    return;
  }
  if(oddcnt==0){
    cout<<-1<<endl;
    return;
  }
  cout<<n-oddcnt<<endl;
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