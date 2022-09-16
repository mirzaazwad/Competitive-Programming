#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define ll long long
#define endl "\n"

using namespace std;




void solve(){
    ll n;
    cin>>n;
    int count=0;
    for(auto u:primeList){
        if(n%u==0){
            count++;
        }
    }
    if(n-3>=0){
        cout<<n*n-(count*(count-1)+(n*2) - 4)<<endl;
    }
    else{
        cout<<n*n-(count*(count-1)+n-1)<<endl;
    }
}

int main()
{
    fastio;
    sieve(1000007);
    int t;
    cin >> t;
    
    while(t--)
    {
       solve();
    }
    return 0;
}