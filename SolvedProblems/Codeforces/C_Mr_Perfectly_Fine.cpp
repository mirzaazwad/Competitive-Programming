#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int t;
    cin >> t;
    while(t--)
    {
       int n;
       cin>>n;
       vector<pair<int,string>>vp(n),two_skills,one_skills,one_skills2;
       for(pair<int,string> &p:vp){
        cin>>p.first>>p.second;
        if(p.second[0]=='1' && p.second[1]=='1'){
          two_skills.emplace_back(p.first,p.second);
        }
        else if(p.second[0]=='0' && p.second[1]=='1'){
          one_skills.emplace_back(p.first,p.second);
        }
        else if(p.second[1]=='0' && p.second[0]=='1'){
          one_skills2.emplace_back(p.first,p.second);
        }
       }
       if(two_skills.empty() && (one_skills.empty() || one_skills2.empty())){
        cout<<-1<<endl;
        continue;
       }
       else{
        sort(two_skills.begin(),two_skills.end());
        sort(one_skills.begin(),one_skills.end());
        sort(one_skills2.begin(),one_skills2.end());
        long long firstSum=two_skills.empty()?INT_MAX:two_skills[0].first;
        long long secondSum=one_skills.empty()?INT_MAX:one_skills[0].first;
        long long thirdSum=one_skills2.empty()?INT_MAX:one_skills2[0].first;
        cout<<min(firstSum,thirdSum+secondSum)<<endl;
       }

    }
    return 0;
}