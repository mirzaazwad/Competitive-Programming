#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
void solve(){
    int n;
    cin>>n;

    vector<long long>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];

    long long sum=0;
    int ptr;
    for(int i=0;i<n;i++){
        if(arr[i]){
            ptr=i;
            break;
        }
    }
    for(int i=ptr;i<n;i++){
        if(!arr[i]){
            arr[i]++;
            arr[i-1]--;
            sum++;
        }
    }
    for(int i=0;i<n-1;i++){
        sum+=arr[i];
    }
    cout<<sum<<endl;


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