#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    string s,t;
    cin>>s>>t;
    string ans=s+t;
    sort(ans.begin(),ans.end());
    cout<<ans<<endl;
    return 0;
}