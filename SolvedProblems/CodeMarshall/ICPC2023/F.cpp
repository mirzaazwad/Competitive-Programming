#include <bits/stdc++.h>

#define fastio                      \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL)

#define endl "\n"
#define ll long long
using namespace std;
map<string, ll> mp, mp2;
map<string, pair<string,string>> mp3;
map<string,string>mp4;

int main()
{
  fastio;
  int n;
  cin >> n;
  mp["A+"] = 0;
  mp["B+"] = 0;
  mp["A-"] = 0;
  mp["B-"] = 0;
  mp["AB+"] = 0;
  mp["AB-"] = 0;
  mp["O+"] = 0;
  mp["O-"] = 0;
  for (int i = 0; i < n; i++)
  {
    string a, b, c, d;
    cin >> a >> b >> c >> d;
    if(mp4[b].empty()){
      mp3[b] = {c.substr(6, 4),d};
      mp4[b]=a;
    }
    else{
      if(mp4[b]<a){
        mp3[b] = {c.substr(6, 4),d};
        mp4[b]=a;
      }
    }
    
  }
  for (auto u : mp3)
  {
    mp[u.second.second]++;
    mp2[u.second.first]++;
  }
  for(auto u:mp){
    cout<<u.first<<" "<<u.second<<endl;
  }
  for(auto u:mp2){
    cout<<u.first<<" "<<u.second<<endl;
  }
  return 0;
}