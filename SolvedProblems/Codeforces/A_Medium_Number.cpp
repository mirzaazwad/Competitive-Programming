#include <bits/stdc++.h>

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
       int arr[3];
       cin>>arr[0]>>arr[1]>>arr[2];
       sort(arr,arr+3);
       cout<<arr[1]<<endl;
    }
    return 0;
}