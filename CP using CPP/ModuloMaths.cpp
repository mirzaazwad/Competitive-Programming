/*
Author: Mirza Mohammad Azwad
Islamic University of Technology(IUT)
If you're looking at my code, enjoy :)
*/
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h> 
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
 
using namespace __gnu_pbds;
using namespace std;
 
typedef long long ll;
typedef long double ld;
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
typedef vector<vector<ll> > vv64;
typedef vector<vector<p64> > vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define EL printf("\n")
#define el '\n'
#define OK printf("OK")
#define pb push_back
#define mp make_pair
#define ep emplace_back
#define X  first
#define Y  second
#define fillchar(a,x) memset(a, x, sizeof(a))
#define pf push_front
#define FOR(i,l,r) for (int i=l;i<=r;i++)
#define FORD(i,r,l) for (int i=r;i>=l;i--)
#define FORx(i,l,r,x) for (int i=l;i<=r;i+=x)
#define FORDx(i,r,l,x) for (int i=r;i>=l;i-=x)
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define fornx(i,e,x) for(ll i = 0; i < e; i+=x)
#define forsnx(i,s,e,x) for(ll i = s; i < e; i+=x)
#define rfornx(i,s,x) for(ll i = s; i >= 0; i-=x)
#define rforsnx(i,s,e,x) for(ll i = s; i >= e; i-=x)
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define INF 2e18
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())

bool isPrime(int n){
    if(n==2)return true;
    for(int i=2;i<n;i++){
        if(n%i==0)return false;
    }
    return true;
}
void solve(){
    long long n=0,ans=0;

    cin>>n;
    if(n==1){
        ans=1;
    }
    else{
        if(isPrime(n)){
            if(n==2)ans=0;
            else ans=1;
        }
        else{
            ans=(n-1)*(n-1);
            ans=ans%n;
        }
        
    }
    cout<<ans<<el;
}

int main()
{
 #ifndef ONLINE_JUDGE
 freopen("input.in", "r", stdin);
 freopen("output.in", "w", stdout);
 #endif
 fastio
 ll t;
 cin >> t;
 for(int it=0;it<t;it++) {
     cout << "Case #" << it+1 << ": ";
     solve();
 }
 return 0;
}
/*
int32_t main(){
//main function
#ifndef ONLINE_JUDGE
freopen("input.in", "r", stdin);
freopen("output.in", "w", stdout);
#endif
return 0;
}
*/