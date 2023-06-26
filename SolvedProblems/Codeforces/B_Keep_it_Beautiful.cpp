#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

void solve(){
  int n;
  cin>>n;
  stack<int>s;
  string ans;
  bool mid=false;
  deque<int>q;
  for(int i=0;i<n;i++){
    int x;
    cin>>x;
    if(s.empty()){
      s.push(x);
      ans.push_back('1');
    }
    else{
      if(!mid && x<s.top()){
        s.push(x);
        mid=true;
        ans.push_back('1');
      }
      else if(mid && x<=q.front() && x>=s.top()){
        ans.push_back('1');
        q.push_back(x);
      }
      else if(mid && (x>q.front() || x<s.top())){
        ans.push_back('0');
        q.push_back(x);
      }
      else{
        ans.push_back('1');
        s.push(x);
      }
    }
        q.push_back(x);
  }
  cout<<ans<<endl;
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