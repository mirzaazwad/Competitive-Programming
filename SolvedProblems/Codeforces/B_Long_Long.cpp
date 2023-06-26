#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
#define ll long long

void solve(){
  int n;
  cin>>n;
  vector<ll>arr(n),arr_abs(n);
  for(int i=0;i<n;i++){
    cin>>arr[i];
    arr_abs[i] = abs(arr[i]);
  }
  ll MaxVal=accumulate(arr_abs.begin(),arr_abs.end(),0LL);
  int i=0;
  int j=0;
  int count=0;
  while(i<n){
    j=0;
    bool containsNegative=false;
    while(i+j<n){
      if(arr[i+j]<=0){
        if(arr[i+j]<0){
          containsNegative=true;
        }
        j++;
      }
      else{
        break;
      }
    }
    if(j>0){
      i+=j;
      if(containsNegative){
        count++;
      }
    }
    else{
      i++;
    }
  }
  cout<<MaxVal<<" "<<count<<endl;
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