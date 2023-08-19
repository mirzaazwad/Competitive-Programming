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
    multiset<ll>ms;
    for(int i=0;i<n;i++){
        ll k;
        cin>>k;
        auto it=ms.upper_bound(k);
        if(it!=ms.end()){
            ms.erase(it);
        }
        ms.insert(k);
    }
    cout<<ms.size()<<endl;

    return 0;
}