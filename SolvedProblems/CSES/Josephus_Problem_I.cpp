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
    queue<ll>q;
    for(int i=1;i<=n;i++){
        q.push(i);
    }
    while(q.size()>1){
        ll k=q.front();
        q.pop();
        cout<<q.front()<<" ";
        if(!q.empty()){
            q.pop();
        }
        q.push(k);
    }
    cout<<q.front()<<endl;

    return 0;
}