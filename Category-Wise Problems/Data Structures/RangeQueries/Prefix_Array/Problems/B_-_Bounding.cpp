#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int N,X;
    cin>>N>>X;
    int arr[N];
    for(int i=0;i<N;i++)cin>>arr[i];
    int D[N+1];
     D[0]=0;
     for(int i=1;i<=N;i++){
        D[i]=D[i-1]+arr[i-1];
     }
     cout<<upper_bound(D,D+N+1,X)-D<<endl;

    return 0;
}