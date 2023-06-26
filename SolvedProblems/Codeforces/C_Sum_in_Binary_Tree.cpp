#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll fsum(ll n) {
    ll sum=0;
    while(n>=1){
      sum+=n;
      n/=2;
    }
    return sum;
}

void solve(){
  ll n;
  cin>>n;
  ll path_sum = fsum(n);
  cout << path_sum << endl; 
}

int main() {
    int t;
    cin >> t;
    
    while(t--)
    {
      solve();
    }
    return 0;
}
