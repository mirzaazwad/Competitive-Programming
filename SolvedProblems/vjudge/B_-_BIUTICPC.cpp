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
    ll M;
    cin>>M;
    double ans=1e-12;
    double t=((5+sqrt(25-4*12*(1-M)))/24)+ans;
    cout<<fixed<<setprecision(10)<<t<<endl;
    return 0;
}