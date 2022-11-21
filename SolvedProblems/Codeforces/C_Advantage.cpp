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
    ll ix=max_element(arr.begin(),arr.end())-arr.begin();
    vector<ll>temp=arr;
    sort(temp.begin(),temp.end(),greater<ll>());
    for(int i=0;i<n;i++){
        if(arr[i]==temp[0]){
            cout<<arr[i]-temp[1]<<" ";
        }
        else{
            cout<<arr[i]-temp[0]<<" ";
        }
    }
    cout<<endl;
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