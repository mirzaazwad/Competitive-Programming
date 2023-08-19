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
    string s;
    cin>>s;
    ll cnt=1;
    ll maxCnt=0;
    for(int i=1;i<=s.length();i++){
        if(s[i]==s[i-1]){
            cnt++;
        }
        else{
            maxCnt=max(maxCnt,cnt);
            cnt=1;
        }
    }
    cout<<maxCnt<<endl;
    return 0;
}