#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
typedef long long ll;
using namespace std;

int main()
{
    fastio;
    int n;
    cin>>n;
    vector<pair<pair<ll,ll>,ll>>vp(n);
    for(int i=0;i<n;i++){
        cin>>vp[i].first.first>>vp[i].first.second;
        vp[i].second=i;
    }
    sort(vp.begin(),vp.end());
    int rooms=0,last_room=0;
    priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>>pq;
    vector<ll>ans(n);
    for(int i=0;i<n;i++){
        if(pq.empty()){
            rooms++;
            pq.push({vp[i].first.second,rooms});
            ans[vp[i].second]=rooms;
        }
        else{
            pair<ll,ll>curr=pq.top();
            if(curr.first<vp[i].first.first){
                pq.pop();
                pq.push({vp[i].first.second,curr.second});
                ans[vp[i].second]=curr.second;
            }
            else{
                rooms++;
                pq.push({vp[i].first.second,rooms});
                ans[vp[i].second]=rooms;
            }
        }
        last_room=max(last_room,rooms);
    }
    cout<<last_room<<endl;
    for(ll i:ans)cout<<i<<" ";
    cout<<endl;
    return 0;
}