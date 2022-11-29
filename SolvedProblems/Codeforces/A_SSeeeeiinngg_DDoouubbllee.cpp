#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

void solve(){
    string s;
    cin>>s;
    map<char,int>mp;
    for(char c:s){
        mp[c]++;
    }
    string res="",res2="";
    for(auto u:mp){
        for(int i=0;i<u.second;i++){
            res.push_back(u.first);
            res2.push_back(u.first);
        }
    }
    reverse(res2.begin(),res2.end());
    cout<<res+res2<<endl;


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