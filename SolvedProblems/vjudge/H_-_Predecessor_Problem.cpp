#include <bits/stdc++.h>

#define fastio                      \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL)

#define endl "\n"
#define ll long long
using namespace std;
set<ll> st;

int main()
{
  fastio;
  int N, Q;
  cin >> N >> Q;
  string s;
  cin >> s;
  for (int i = 0; i < s.length(); i++)
  {
    if (s[i] == '1')
    {
      st.insert(i);
    }
  }
  while (Q--)
  {
    ll x, k;
    cin >> x >> k;
    if(x==0){
      st.insert(k);
    }
    else if(x==1){
      auto it=st.find(k);
      if(it==st.end()){
        continue;
      }
      st.erase(it);
    }
    else if(x==2){
      if(st.find(k)!=st.end()){
        cout<<1<<endl;
      }
      else cout<<0<<endl;
    }
    else if(x==3){
      auto it=st.lower_bound(k);
      if(it==st.end()){
        cout<<-1<<endl;
      }
      else cout<<*it<<endl;
    }
    else if(x==4){
      auto it=st.upper_bound(k);
      auto it2=st.begin();
      if(*it==k){
        cout<<*it<<endl;
      }
      else if(*it2>k){
        cout<<-1<<endl;
      }
      else if(it2==it){
        cout<<-1<<endl;
      }
      else{
        it--;
        cout<<*it<<endl;
      }
    }
  }
  return 0;
}