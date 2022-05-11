/*
*Author: Mirza Mohammad Azwad
*Institude: Islamic University of Technology
*/
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
//#include <bits/stdc++.h> 
#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>
 
using namespace std;
 
#define v(x) vector<x>
#define d(x) deque<x>
typedef long long ll;
typedef long double ld;
typedef pair<int,int> pi;
typedef pair<ll,ll> pll;
typedef pair<double,double> pdd;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef vector<vector<int> > vvi;
typedef vector<vector<ll> > vvll;
typedef vector<vector<pll> > vvpll;
typedef vector<pll> vpll;
typedef vector<pi> vpi;
typedef deque<ll> dll;
typedef deque<int> di;
typedef deque<deque<int> > ddi;
typedef deque<deque<ll> > ddll;
typedef deque<deque<pll> > ddpll;
typedef deque<pll> dpll;
typedef deque<pi> dpi;
ll MOD = 998244353;
ll M = 1000000007;
double eps = 1e-12;
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define forsnx(i,s,e,x) for(ll i = s; i < e; i+=x)
#define rforsnx(i,s,e,x) for(ll i = s; i >= e; i-=x)
#define endl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<endl
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define sp " "
#define srt(v) sort(v.begin(), v.end());
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
#define Case cout << "Case " << it << ": ";
#define down cout<<endl;
#define raw_readline(x) getline(cin,(x))
#define readline(x) string (x);getline(cin,(x))
#define raw_read(x) cin>>(x)
#define raw_input(x) cin>>(x);cin.ignore()
#define input(datatype,x) datatype (x);cin>>(x);cin.ignore()
#define read(datatype,x) datatype (x);cin>>(x)
#define print(x) cout<<(x)<<endl
#define output(x) cout<<(x)<<sp
#define YES output("YES")
#define Yes output("Yes")
#define yes output("yes")
#define NO output("NO")
#define No output("No")
#define no output("no")
#define ittc input(int,tc) ; for(int it=1;it<=tc;it++)
#define printarray(arr,n) forn(i,n)output(arr[i]); \
down \
 
pair<int,int> longestIncreasingSubsequence(vi v, int n){
    int maximumLen=INT_MIN;
    int start=0;
    for(int i=1;i<n;i++){
        if(v[i]-v[i-1]>1)
        {
            maximumLen=max(maximumLen,i-1-start);
            start=i;
        }
    }
    maximumLen=max(maximumLen,n-1-start);
    pair<int,int>p;
    start=0;
    for(int i=1;i<n;i++){
        if(v[i]-v[i-1]>1){
            int len=i-1-start;
            if(len==maximumLen){
                p.se=v[i-1];
                p.fi=v[start];
                break;
            }
            start=i;
        }
    }
    if(maximumLen==n-1-start){
        return mp(v[start],v[n-1]);
    }
    return p;
}

void solve(){
    map<int,int>mp,mp2;
    int mini=INT_MAX;
    int maxi=INT_MAX;
    int secmaxi=INT_MIN;
    int secmini=INT_MAX;
    input(int,n);
    input(int,k);
    forn(i,n){
        input(int,x);
        if(mp.find(x)!=mp.end())mp[x]++;
        else mp[x]=1;
    }
     mini=INT_MAX;
     maxi=INT_MIN;
     vi ans;
    for(auto u:mp){
        if(u.se>=k){
            mp2[u.fi]=u.se;
            ans.pb(u.fi);
        }
    }
    int len=sz(ans);
    if(len==0){
        print(-1);
        return;
    }
    pair<int,int>res=longestIncreasingSubsequence(ans,len);
    cout<<res.first<<" "<<res.second<<endl;
}
int main()
{
    fastio;
    ittc{
        //Case;
        solve();
    }
 return 0;
}