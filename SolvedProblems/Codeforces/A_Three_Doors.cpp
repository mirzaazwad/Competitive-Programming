/*
*Author: Mirza Mohammad Azwad
*Institude: Islamic University of Technology
*/
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h> 
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 
using namespace std;
 
#define ll long long
#define endl "\n"
 

void solve(){
    int x;
    cin>>x;
    int arr[4];
    arr[0]=0;
    for(int i=1;i<=3;i++)cin>>arr[i];
    bool doors[4];
    memset(doors,false,sizeof(doors));
    doors[x]=true;
    int a;
    while(x!=0){
        x=arr[x];
        doors[x]=true;
    }
    for(int i=1;i<=3;i++){
        if(!doors[i]){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;


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