#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    map<char,int>mp;
    string s;
    cin>>s;
    for(auto u:s){
        mp[u]++;
    }
    int odd_count=0;
    string odd;
    s="";
    for(auto u:mp){
        if(u.second%2){
            if(odd_count>0){
                cout<<"NO SOLUTION"<<endl;
                return 0;
            }
            odd_count++;
            while(mp[u.first]>0){
                odd.push_back(u.first);
                mp[u.first]--;
            }
        }
        else{
            mp[u.first]/=2;
            while(mp[u.first]>0){
                s.push_back(u.first);
                mp[u.first]--;
            }
        }
    }
    string tmp=s;
    reverse(s.begin(),s.end());
    cout<<tmp+odd+s<<endl;

    return 0;
}