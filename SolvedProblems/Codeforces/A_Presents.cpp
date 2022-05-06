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
    for (int i=1; i<=n; i++){
        int tmp;
        cin>>tmp;
        arr[tmp]=i;
    }
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}