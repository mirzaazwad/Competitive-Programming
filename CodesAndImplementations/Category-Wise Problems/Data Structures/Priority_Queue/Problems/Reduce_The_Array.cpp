//SPOJ Problem
/*
*Author: Mirza Mohammad Azwad
*Institude: Islamic University of Technology
In the name of Allah, the Lord of Mercy, the Giver of Mercy
*/
#include <bits/stdc++.h> 
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 
using namespace std;
 
#define ll long long
#define endl "\n"
 

void solve(){
    int n;
    cin>>n;
    vector<ll>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    priority_queue <int, vector<int>, greater<int>> q;
    for(int i=0;i<n;i++){
        q.push(arr[i]);
    }
    ll cost=0;
    
    while(q.size()>1){
        ll value1=q.top();
        q.pop();
        ll value2=q.top();
        q.pop();
        ll sum=value1+value2;
        q.push(sum);
        cost+=sum;
    }
    cout<<cost<<endl;
    
}


int main()
{
    fastio;
    int t;cin>>t;
    for(int i=1;i<=t;i++){
        //cout<<"Case "<<i<<": ";
        solve();
    }
    return 0;
}
