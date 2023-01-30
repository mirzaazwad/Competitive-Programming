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
    vector<ll>arr(n);
    for(ll &i:arr)cin>>i;
    sort(arr.begin(), arr.end());
    for(int i=(n+1)/2-1,j=i+1;j<n;i--,j++){
      if(j!=n-1)cout<<arr[i]<<" "<<arr[j]<<" ";
      else{
        cout<<arr[i]<<" "<<arr[j];
      }
    }
    if(n%2)cout<<" "<<arr.front()<<endl;
    else cout<<endl;
    return 0;
}