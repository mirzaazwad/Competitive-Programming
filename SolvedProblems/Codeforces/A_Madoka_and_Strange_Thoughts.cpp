#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define ll long long
#define endl "\n"

using namespace std;
#define N 10000007
bool isPrime[N+1];
vector<ll>primeList;

void sieve(){
    for(int i=0;i<=N;i++)isPrime[i]=true;
    for(int i=4;i<=N;i+=2)isPrime[i]=false;
    isPrime[2]=true;
    isPrime[0]=false;
    isPrime[1]=false;
    for(int i=3;i<=N;i+=2){
        if(isPrime[i]){
            for(int j=i+i;j<=N;j+=i){
                isPrime[j]=false;
            }
        }
    }
    for(int i=0;i<=N;i++){
        if(isPrime[i])primeList.push_back(i);
    }
}



void solve(){
    ll n;
    cin>>n;
    cout<<n+((n/2)+(n/3))*2<<endl;
    
}

int main()
{
    fastio;
    sieve();
    int t;
    cin >> t;
    
    while(t--)
    {
       solve();
    }
    return 0;
}