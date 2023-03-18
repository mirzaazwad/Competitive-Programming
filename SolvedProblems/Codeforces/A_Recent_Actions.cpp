#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
#define ll long long
using namespace std;

void solve(){
  int n,m;
  cin>>n>>m;
  vector<ll>p(m);
  for(int i=0;i<m;i++){
    cin>>p[i];
  }
  set<ll>s;
  deque<ll>v;
  for(int i=1;i<=n;i++){
    s.insert(i);
    v.push_back(i);
  }
  map<ll,ll>mp;
  int count=1;
  for(auto u:p){
    auto it=s.find(u);
    if(it==s.end()){
      s.insert(u);
      mp[v.back()]=count;
      v.pop_back();
      if(v.empty())break;
    }
    count++;
  }
  for(int i=1;i<=n;i++){
    cout<<(mp[i]==0?-1:mp[i])<<" ";
  }
  cout<<endl;

  
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