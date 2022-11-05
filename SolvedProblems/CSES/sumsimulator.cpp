#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int>v(n);
    iota(v.begin(),v.end(),1);
    while(v.size()>1){
        int value1=v.back();
        v.pop_back();
        int value2=v.back();
        v.pop_back();
        v.push_back(abs(value1-value2));
    }
    cout<<v.front()<<endl;
}

int main()
{
    fastio;
    int t;
    cin >> t;
    
    while(t--)
    {
       solve();
    }
    return 0;
}