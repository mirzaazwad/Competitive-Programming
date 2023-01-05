// In the name of Allah, The Lord of Mercy, The Giver of Mercy
// Author: Mirza Mohammad Azwad
// Institution: Islamic University of Technology
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#define ll int64_t
#define short int16_t
#define int int32_t
#define endl "\n"

using namespace std;
#define fastio                      \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL)

bool compare(string a, string b)
{
  reverse(a.begin(), a.end());
  reverse(b.begin(), b.end());
  return a<b;
}

ll findMax(vector<string>v){
  ll Max=LLONG_MIN;
  for(string s:v){
    Max=max(Max,(ll)s.length());
  }
  return Max;
}

void solve(vector<string> v)
{
  ll width=findMax(v);
  sort(v.begin(), v.end(), compare);
  for (string s : v)
  {
    cout <<std::right<<setw(width)<< s << endl;
  }
}

signed main()
{
  fastio;
  string s;
  vector<string> v;
  while (getline(cin,s))
  {
    v.push_back(s);
    if (s == "\n" || s == "\r" || s.empty() || s=="" || s==" ")
    {
      v.pop_back();
      solve(v);
      cout<<endl;
      v.clear();
    }
  }
  solve(v);
  v.clear();
  return 0;
}