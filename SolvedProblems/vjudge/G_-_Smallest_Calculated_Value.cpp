#include <bits/stdc++.h>

#define fastio                      \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL)

#define endl "\n"
#define ll long long
using namespace std;

int main()
{
  fastio;
  double a, b, c;
  cin >> a >> b >> c;
  vector<double>ans;
  ans.push_back((a+b)+c);
  ans.push_back((a+b)-c);
  ans.push_back((a+b)*c);
  if((ll)(a+b)%(ll)c==0)ans.push_back((a+b)/c);
  ans.push_back((a-b)+c);
  ans.push_back((a-b)-c);
  ans.push_back((a-b)*c);
  if((ll)(a-b)%(ll)c==0)ans.push_back((a-b)/c);
  if((ll)a%(ll)b==0){
    ans.push_back((a/b)+c);
    ans.push_back((a/b)-c);
    ans.push_back((a/b)*c);
    if((ll)(a/b)%(ll)c==0)ans.push_back((a/b)/c);
  }
  ans.push_back((a*b)+c);
  ans.push_back((a*b)-c);
  ans.push_back((a*b)*c);
  if((ll)(a*b)%(ll)c==0)ans.push_back((a*b)/c);
  sort(ans.begin(), ans.end());
  for(auto u:ans){
    if(u>=0 && ceil(u)==floor(u)){
      cout<<long(u)<<endl;
      break;
    }
  }
  

  
  return 0;
}