#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
#define ll long long
using namespace std;

int main()
{
    fastio;
    ll a,b,c;
    cin>>a>>b>>c;
    for(int i=0;i<c;i++){
      cout<<a-b<<endl;
      a-=b;
    }
    return 0;
}