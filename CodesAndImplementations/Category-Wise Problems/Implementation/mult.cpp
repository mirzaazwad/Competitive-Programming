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
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int start=0;
    for(int i=1;i<n;i++){
        if(start==i)continue;
        if(arr[i]%arr[start]==0){
            cout<<arr[i]<<endl;
            start=i+1;
        }
        
    }
    return 0;
}