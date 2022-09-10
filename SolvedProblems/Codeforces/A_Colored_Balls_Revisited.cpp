#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
#define ll long long

using namespace std;


void solve(){
    int n;
    cin>>n;
    vector<pair<ll,ll>>cnt(n+1);
    cnt[0].first=0;
    cnt[0].second=0;
    for(int i=1;i<=n;i++){
        cin>>cnt[i].first;
        cnt[i].second=i;
    }
    sort(cnt.begin(),cnt.end());
    for(int i=2;i<=n;i++){
        int Min=(min(cnt[i].first,cnt[i-1].first));
        cnt[i].first-=Min;
        cnt[i-1].first-=Min;
    }
    // for(int i=1;i<=n;i++){
    //     cout<<cnt[i].first<<" ";
    // }
    // cout<<endl;
    for(int i=1;i<=n;i++){
        if(cnt[i].first>0){
            cout<<cnt[i].second<<endl;
            return;
        }
    }
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