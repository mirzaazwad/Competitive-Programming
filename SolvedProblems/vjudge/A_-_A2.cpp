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

namespace Problem
{
  class Program
  {
  private:
    int n;
    map<string, vector<ll>> mp;
    vector<string> names;
    map<string,pair<ll,ll>>score;
    map<string,pair<ll,ll>>rank;

  public:
    Program(int t = 1)
    {
      for (int i = 1; i <= t; i++)
      {
        takeInput();
        solve();
        clearSpace();
      }
    }

    void takeInput()
    {
      cin >> n;
      names.resize(n);
      for (int i = 0; i < n; i++)
      {
        vector<ll> v;
        cin >> names[i];
        for (int j = 0; j < 5; j++)
        {
          ll x;
          cin >> x;
          if(j==0){
            v.push_back(x);
          }
          else{
            v.push_back(x+v.back());
          }
        }
        mp[names[i]] = v;
        v.clear();
      }
    }

    void clearSpace()
    {
    }


    void solve()
    {
      for(int i=0;i<n;i++){
        score[names[i]]=make_pair(mp[names[i]].back(),mp[names[i]].back()+500);
      }
      for(int i=0;i<n;i++){
        int rank_min=0;
        int rank_max=0;
        for(int j=0;j<n;j++){
          if(i!=j){
            if(score[names[i]].first>score[names[j]].second){
              rank_min++;
            }
            else if(score[names[i]].first==score[names[j]].second && names[i]<names[j]){
              rank_min++;
            }
            if(score[names[i]].second>score[names[j]].first){
              rank_max++;
            }
            else if(score[names[i]].second==score[names[j]].first && names[i]<names[j]){
              rank_max++;
            }
          }
        }
        rank[names[i]]=make_pair(n-rank_max,n-rank_min);
      }
      for(int i=0;i<n;i++){
        cout<<rank[names[i]].first<<" "<<rank[names[i]].second<<endl;
      }
    }
  };
}
signed main()
{
  fastio;
  Problem::Program program = Problem::Program();
  return 0;
}