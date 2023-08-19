#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    string s;
    vector<string>ans;
    cin>>s;
    
    while(next_permutation(s.begin(),s.end())){
        continue;
    }
    ans.push_back(s);
    while(next_permutation(s.begin(),s.end())){
        ans.push_back(s);
    }
    cout<<ans.size()<<endl;
    for(auto u:ans){
        cout<<u<<endl;
    }
    return 0;
}