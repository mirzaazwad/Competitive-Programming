#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

void solve(){
    int n,x;
    cin >> n >> x;
    int siz=n<<1;
    int arr[siz];
    for(int i=0;i<siz;i++){
        cin>>arr[i];
    }
    sort(arr,arr+siz);
    for(int i=0;i<n;i++){
        if(arr[n+i]-arr[i]<x){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;

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