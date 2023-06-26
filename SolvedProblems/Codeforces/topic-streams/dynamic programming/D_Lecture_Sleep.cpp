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
    int n,k;
    cin>>n>>k;
    vector<ll>a(n+1,0),t(n+1,0),csum(n+1,0);
    for(int i=1;i<=n;i++){
      cin>>a[i];
    }
    ll tmp=0;
    for(int i=1;i<=n;i++){
      cin>>t[i];
      tmp+=(a[i]*t[i]);
      csum[i]=tmp;
    }
    vector<ll>prefix(n+1);
    partial_sum(a.begin(),a.end(),prefix.begin());
    ll Max=INT_MIN;
    for(int i=1;i+k-1<=n;i++){
      ll temp=csum[n]-(csum[i+k-1]-csum[i-1])+(prefix[i+k-1]-prefix[i-1]);
      Max=max(temp,Max);
    }
    cout<<Max<<endl;



    return 0;
}