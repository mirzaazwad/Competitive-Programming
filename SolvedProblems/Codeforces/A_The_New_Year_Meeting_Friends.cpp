#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    std::array<int,3>arr;
    for(int i=0;i<3;i++){
        cin>>arr[i];
    }
    sort(arr.begin(), arr.end());
    cout<<abs(arr[1]-arr[0])+abs(arr[2]-arr[1])<<endl;
    return 0;
}