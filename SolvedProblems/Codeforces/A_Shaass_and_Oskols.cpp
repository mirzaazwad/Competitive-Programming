#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
    }
    int m;
    cin>>m;
    int x,y;
    for(int i=0; i<m; i++)
    {
        cin>>x>>y;
        if(x+1>n){
            arr[x-1]+=(y-1);
            arr[x]=0;
        }
        else if(x-1<1){
            arr[x+1]+=(arr[x]-(y));
            arr[x]=0;
        }
        else{
            arr[x+1]+=(arr[x]-(y));
            arr[x-1]+=(y-1);
            arr[x]=0;
        }
    }
    for(int i=1;i<=n;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}