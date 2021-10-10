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
 

int main(){
    int n;
    cin>>n;
    vector<ll>v(n);
    vector<ll>vsum(n);
    forn(i,n){
        cin>>v[i];
        if(i>0){
            vsum[i]=v[i]+vsum[i-1];
        }
        else{
            vsum[i]=v[i];
        }
    }
    sort(v.begin(),v.end());
    vector<ll>usum(n);
    forn(i,n){
        if(i>0){
            usum[i]=v[i]+usum[i-1];
        }
        else{
            usum[i]=v[i];
        }
    }
    int m;
    cin>>m;
    int type,l,r;
    forn(i,m){
        cin>>type>>l>>r;
        if(type==1){
            if(l>1)cout<<vsum[r-1]-vsum[l-2]<<endl;
            else cout<<vsum[r-1]<<endl;
        }
        else{
            if(l>1)cout<<usum[r-1]-usum[l-2]<<endl;
            else cout<<usum[r-1]<<endl;
        }
    }


    return 0;
}
