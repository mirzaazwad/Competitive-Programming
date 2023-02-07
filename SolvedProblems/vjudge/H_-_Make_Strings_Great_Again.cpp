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
    vector<vector<int>>ix_par;
    map<char,vector<int>>mp;
    for(int i=0;i<s.length();i++){
      mp[s[i]].push_back(i);
    }
    for(auto u:mp[t.back()]){
      int tmp=u;
      int sum=0;
      for(int i=t.length()-2;i>=0;i--){
        auto it=lower_bound(mp[t[i]].begin(),mp[t[i]].end(),tmp-1)-mp[t[i]].begin();
        sum+=abs(it-tmp);
        tmp=it;
      }
      cout<<sum<<endl;
    }
    return 0;
}