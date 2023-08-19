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
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    map<ll,ll>mp;
    int i=0;
    int j=0;
    int cnt=0;
    ll MaxCnt=LLONG_MIN;
    while(j<n){
        if(mp.find(v[j])==mp.end() || mp[v[j]]==0){
            mp[v[j]]++;
            cnt++;
            j++;
        }
        else{
            mp[v[i]]--;
            cnt--;
            i++;
        }
        MaxCnt=max(MaxCnt,(ll)cnt);
    }
    cout<<MaxCnt<<endl;
    return 0;
}