#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
#define ll long long
using namespace std;

void solve(){
  ll n,m;
  cin>>n>>m;
  vector<ll>arr(n);
  ll Max=LLONG_MIN;
  for(ll &i:arr){
    cin>>i;
    Max=max(Max,i);
  }
  ll diffsum=0;
  for(int i=0;i<n;i++){
    diffsum+=(Max-arr[i]);
  }
  ll sum=accumulate(arr.begin(),arr.end(),0LL);
  if(diffsum==m){
    cout<<Max<<endl;
    return;
  }
  if(m>diffsum){
    m-=diffsum;
    cout<<(Max*n+m)/n<<endl;
    return;
  }
  if(m<diffsum){
    sort(arr.rbegin(),arr.rend());
    int i=0;
    int num_elements=n;
    for(;i<n;i++){
      diffsum-=((Max-arr[i])*num_elements--);
      Max=arr[i];
      if(diffsum<=m){
        break;
      }
    }
    num_elements++;
    m-=diffsum;
    if(m<num_elements){
      cout<<Max<<endl;
    }
    else cout<<Max+m/num_elements<<endl;
    
  }

}

int main()
{
    fastio;
    solve();
    return 0;
}