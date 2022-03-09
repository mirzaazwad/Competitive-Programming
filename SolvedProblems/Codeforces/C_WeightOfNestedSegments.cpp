#include <bits/stdc++.h>
//Codeforces 1650C
//Author: Mirza Mohammad Azwad
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int t;
    cin >> t;
    
    while(t--)
    {
       int n,m;
       cin>>n>>m;
       pair<int,pair<int,int>>arr[m];
       for(int i=0;i<m;i++){
           int x,w;
           cin>>x>>w;
           arr[i].first=w;
           arr[i].second={x,i+1};
       }
       sort(arr,arr+m);
       pair<int,int>a[2*n];
       int weight=0;
       for(int i=0;i<2*n;i++){
           a[i]=arr[i].second;
           weight+=arr[i].first;
       }
       cout<<weight<<endl;
       sort(a,a+2*n);
       for(int i=0;i<n;i++){
           cout<<a[i].second<<" "<<a[2*n-(i+1)].second<<endl;
       }
       cout<<endl;
       
    }
    return 0;
}
