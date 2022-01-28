#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

void solve(){
    int n;
    cin>>n;
    int sum=0;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    if(sum%n==0){
        cout<<0<<endl;
    }
    else{
        cout<<1<<endl;
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
