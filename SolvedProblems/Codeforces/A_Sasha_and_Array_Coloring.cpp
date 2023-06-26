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
  sort(arr.begin(), arr.end());
  int i=0;
  int j=n-1;
  int sum=0;
  while(i<j){
    sum+=(arr[j]-arr[i]);
    i++;
    j--;
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