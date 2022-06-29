#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

void solve(){
    int n;
    cin>>n;
    int arr[n];
    int x;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++) {
        int x=0;
        for(int j=0;j<n;j++){
            if(i!=j){
                x=x^arr[j];
            }
        }
        if(x==arr[i]){
            cout<<x<<endl;
            return;
        }
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