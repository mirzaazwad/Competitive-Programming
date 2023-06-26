#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

void solve(){
  long long n;
  cin>>n;
  if(n==4){
    cout<<"Bob"<<endl;
  }
  else if(n>3){
    cout<<"Alice"<<endl;
  }
  else{
    cout<<"Bob"<<endl;
  }
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