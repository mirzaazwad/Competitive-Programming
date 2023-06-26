#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
#define ll long long
using namespace std;

int main()
{
    fastio;
    int n;
    cin>>n;
    vector<ll>a(n);
    vector<ll>b;
    for(int i=0;i<n;i++){
      cin>>a[i];
      b.push_back(a[i]-(i+1));
    }
    sort(b.begin(),b.end());
    ll c;
    if(n%2){
      c=b[n/2];
    }
    else{
      c=(b[(n+1)/2]+b[n/2])/2;
    }
    ll sum=0;
    for(int i=0;i<n;i++){
      sum+=abs(a[i]-(c+(i+1)));
    }
    cout<<sum<<endl;

    
    return 0;
}