#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
#define ll long long
using namespace std;

void solve(){
  ll n;
  cin>>n;
  if(n%2){
    cout<<-1<<endl;
    return;
  }
  cout<<(n/2)<<" "<<1<<endl;
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