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
       int maxi=INT_MIN;
       for(int i=0;i<n;i++){
           cin>>arr[i];
            maxi=max(arr[i],maxi);
       }
       int max_d=INT_MIN;
       for(int i=0;i<n;i++){
           max_d=max(abs(arr[i]-maxi),max_d);
       }
       cout<<max_d<<endl;
}

int main()
{
    fastio;
    int t;
    cin >> t;
    for(int i=0;i<t;i++)solve();
    return 0;

}
