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
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define forsnx(i,s,e,x) for(ll i = s; i < e; i+=x)
#define rforsnx(i,s,e,x) for(ll i = s; i >= e; i-=x)
#define endl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
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
#define ittc int tc ; cin >> tc ; for(int it=1;it<=tc;it++)
#define Case cout << "Case " << it << ": ";
#define down cout<<endl;
#define readline(x) getline(cin,(x))
#define input(x) cin>>(x)
#define print(x) cout<<(x)<<endl
#define output(x) cout<<(x)<<sp
#define YES output("YES")
#define Yes output("Yes")
#define yes output("yes")
#define NO output("NO")
#define No output("No")
#define no output("no")
ll M = 1000000007;
 

bool isSorted(vll v, int n) { 
    for(int i=1;i<n;i++){
        if(v[i]<v[i-1]) return false;
    }
    return true;
}

void signSwap(vll v,vll tmp, int n,int& pos_swap, int& neg_swap) {
    forn(i,n){
        if(v[i]!=tmp[i]){
            if(v[i]>0)pos_swap++;
            else neg_swap++;
        }
    }
}

void solve(){
        int n,negativeCount=0;
        input(n);
        vll v(n),tmp(n);
        forn(i,n){
            cin>>v[i];
            tmp[i]=abs(v[i]);
            if(v[i]<0)negativeCount++;
        }
        int i=0;
        for(int i=0;i<negativeCount;i++){
            tmp[i]=-tmp[i];
        }
        int pos_swap=0,neg_swap=0;
        signSwap(v,tmp,n,pos_swap,neg_swap);
        if(isSorted(tmp,n) && pos_swap==neg_swap){
            YES;
            return;
        }
        NO;

       

}
int main()
{
    fastio;
    ittc{
        //Case;
        solve();
        down
    }
 return 0;
}