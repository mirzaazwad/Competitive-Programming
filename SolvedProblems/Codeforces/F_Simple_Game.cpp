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
    ll sum=accumulate(arr.begin(),arr.end(),0LL);
    if(sum%2){
      cout<<"Alice"<<endl;
    }
    else{
      cout<<"Bob"<<endl;
    }


    return 0;
}