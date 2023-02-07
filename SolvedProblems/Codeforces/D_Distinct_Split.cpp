#include<bits/stdc++.h>

using namespace std;
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);cout.tie(NULL);

void solve(){
    int n;
    cin>>n;
    string s;
    cin >> s;
    int sum1=0;
    int sum2=0;
    map<char,int>mp1,mp2;
    for(int i=0;i<n;i++){
      mp1[s[i]]++;
    }
    sum1=mp1.size();
    int Max=INT_MIN;
    for(int i=0;i<n;i++){
      mp1[s[i]]--;
      mp2[s[i]]++;
      if(mp1[s[i]]==0)sum1--;
      sum2=mp2.size();
      Max=max(Max,sum1+sum2);
    }
    cout<<Max<<endl;
}

int main() {
    fastio;
    int tc;
    cin>>tc;
    while(tc--){
      solve();
    }
    return 0;
}
