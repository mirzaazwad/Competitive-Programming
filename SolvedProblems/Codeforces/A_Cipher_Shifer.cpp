#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

void solve(){
  string s;
  int n;
  cin>>n;
  cin>>s;
  queue<char>q;
  string res;
  for(auto u:s){
    if(!q.empty()){
      if(q.front()==u){
        res.push_back(u);
        while(!q.empty()){
          q.pop();
        }
      }
      else{
        q.push(u);
      }
    }
    else{
      q.push(u);
    }
  }
  cout<<res<<endl;
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