#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
typedef long long ll;
using namespace std;

int main()
{
    fastio;
    int n;
    cin>>n;
    vector<ll>v(n+1),dist(n+1);
    for(int i=1;i<=n;i++){
        cin>>v[i];
        int k=i-1;
        while(v[k]>=v[i]){
            k=dist[k];
        }
        dist[i]=k;
        cout<<dist[i]<<" ";
    }
    return 0;
}