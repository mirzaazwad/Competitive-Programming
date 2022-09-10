#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)arr[i]=i+1;
    if(n==1){
        cout<<1<<endl;
        return;
    }
    if(n==2){
        cout<<1<<" "<<2<<endl;
        return;
    }
    if(n==3){
        cout<<2<<" "<<1<<" "<<3<<endl;
        return;
    }
    if(n==5){
        for(int i=0;i<n;i++)cout<<arr[i]<<" ";
        cout<<endl;
        return;
    }
    if(n%2){
        for(int i=n-3;i>1;i--)cout<<i<<" ";
        cout<<n-2<<" "<<1<<" "<<n-1<<" "<<n<<endl;
    }
    else{
        for(int i=n-2;i>=1;i--)cout<<i<<" ";
        cout<<n-1<<" "<<n<<endl;
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