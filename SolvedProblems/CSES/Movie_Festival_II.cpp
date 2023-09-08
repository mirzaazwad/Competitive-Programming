#include <bits/stdc++.h>
using namespace std;
//In The Name Of Allah
//The Lord Of Mercy, The Giver Of Mercy
//Which of Allah's blessings can you deny?
typedef long long ll;
#define endl "\n"
#define all(v) v.begin(),v.end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k;
    cin>>n>>k;
    vector<pair<int,int>> v(n);
    for(auto &e:v) cin>>e.second>>e.first;
    sort(all(v));
    multiset<int> st;
    for(int i=0;i<k;i++) st.insert(0);
    int ans=0;
    for(int i=0;i<n;i++){
        auto it=st.upper_bound(v[i].second);
        if(it==st.begin()){
            continue;
        }
        st.erase(--it);
        st.insert(v[i].first);
        ++ans;
    }
    cout<<ans<<endl;

    return 0;
}