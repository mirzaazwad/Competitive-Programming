#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

bool isSorted(long long arr[],int n){
    for(int i=2;i<n;i++){
        if(arr[i]-arr[i-1]<0)return false;
    }
    return true;
}

long long ceiling(long long a,long long b){
    return (long long)ceil((long double)a/(long double)b);
}

void solve(){
    int n;
    cin>>n;
    long long arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    for(int i=1;i<n;i++){
        long long a=arr[i]/arr[i-1];
        if(arr[i]-a*arr[i-1]<=0){
            if(a-1>=0)arr[i]=arr[i]-(a-1)*arr[i-1];
        }
        else{
            arr[i]=arr[i]-a*arr[i-1];
        }
    }
    for(int i=n-1;i>0;i--){
        arr[i]=arr[i]-arr[i-1];
    }
    
    for(int i=1;i<n;i++){
        if(arr[i]!=0){
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