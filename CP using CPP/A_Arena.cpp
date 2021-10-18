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
 
using namespace std;
using namespace __gnu_pbds;
 
typedef long long ll;
typedef unsigned long long ull;
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
ll MOD = 998244353;
double eps = 1e-12;
#define FOR(i,l,r) for (int i=l;i<=r;i++)
#define FORD(i,r,l) for (int i=r;i>=l;i--)
#define FORx(i,l,r,x) for (int i=l;i<=r;i+=x)
#define FORDx(i,r,l,x) for (int i=r;i>=l;i-=x)
#define fillchar(a,x) memset(a, x, sizeof(a))
#define ok printf("OK")
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define el "\n"
#define dbg(x) cout<<#x<<" = "<<x<<el
#define mp make_pair
#define pb push_back
#define ep emplace_back
#define X first
#define Y second
#define INF 2e18
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
 
 bool same(v32 v){
     int len=v.size();
     for(int i=1;i<len;i++){
         if(v[i]!=v[i-1])return false;
     }
     return true;
 }

void solve(){
    int n;
    cin>>n;
    v32 a(n);
    int mini=200;
    forn(i,n){
        cin>>a[i];
        mini=min(mini,a[i]);
    }
    if(same(a))cout<<0<<endl;
    else{
        int cnt=0;
        forn(i,n){
            if(a[i]>mini)cnt++;
        }
        cout<<cnt<<endl;
    }


}
int main(){
fastio
 ll t;
 cin >> t;
 for(int it=0;it<t;it++) {
     solve();
 }
 return 0;
}