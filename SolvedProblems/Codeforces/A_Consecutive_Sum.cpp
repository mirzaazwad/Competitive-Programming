#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
#define ll long long

using namespace std;

void mil_ja_sim_sim(){
    int n,k;
    cin>>n>>k;
    vector<ll>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[i] && i%k==j%k){
                swap(arr[i],arr[j]);
            }
        }   
    }
    ll sum=accumulate(arr.begin(),arr.begin()+k,0LL);
    cout<<sum<<endl;
}

int main()
{
    fastio;
    int t;
    cin >> t;
    
    while(t--)
    {
       mil_ja_sim_sim();
    }
    return 0;
}