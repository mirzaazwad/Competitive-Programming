#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

void solve(){
    int n,k;
    cin>>n>>k;
    long long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(k==1){
        cout<<(n-1)/2<<endl;
    }
    else{
        int count = 0;
        for(int i=1;i<n-1;i++){
            if(arr[i]>arr[i-1]+arr[i+1])count++;
        }
        cout<<count<<endl;
    }
    

}

int main(void){
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}