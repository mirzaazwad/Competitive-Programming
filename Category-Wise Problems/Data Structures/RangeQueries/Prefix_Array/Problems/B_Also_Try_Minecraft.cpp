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
    int n,m;
    cin>>n>>m;
    long long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long fall_damage[n];
    memset(fall_damage,0,sizeof(fall_damage));
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]) fall_damage[i]+=(arr[i-1]-arr[i]);
    }
    long long prefix_arr1[n];
    for(int i=0;i<n;i++){
        if(!i)prefix_arr1[i]=fall_damage[i];
        else prefix_arr1[i]=prefix_arr1[i-1]+fall_damage[i];
    }
    memset(fall_damage,0,sizeof(fall_damage));
    for(int i=n-2;i>=0;i--){
        if(arr[i]<arr[i+1]) fall_damage[i]+=(arr[i+1]-arr[i]);
    }
    long long prefix_arr2[n];
    for(int i=n-1;i>=0;i--){
        if(i==n-1)prefix_arr2[i]=fall_damage[i];
        else prefix_arr2[i]=prefix_arr2[i+1]+fall_damage[i];
    }
    int s[m],t[m];
    for(int i=0;i<m;i++){
        cin>>s[i]>>t[i];
        int a=s[i]-1;
        int b=t[i]-1;
        if(a<=b)cout<<prefix_arr1[b]-prefix_arr1[a]<<endl;
        else cout<<prefix_arr2[b]-prefix_arr2[a]<<endl;
    }

}
int main()
{
    fastio;
    solve();
    return 0;
}
