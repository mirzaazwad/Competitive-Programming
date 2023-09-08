#include <bits/stdc++.h>
using namespace std;
//In The Name Of Allah
//The Lord Of Mercy, The Giver Of Mercy
//Which of Allah's blessings can you deny?
typedef long long ll;
#define endl "\n"
#define all(v) v.begin(),v.end()

ll stringToNum(string s){
    ll ans=0;
    for(int i=0;i<s.size();i++){
        ans*=10;
        ans+=s[i]-'0';
    }
    return ans;
}

bool isPrime(string s){
    ll num=stringToNum(s);
    for(int i=2;i*i<=num;i++){
        if(num%i==0)return false;
    }
    return true;
}



void solve() {
    string s;
    cin>>s;
    int n=s.size();
    bool found=false;
    string ans;
    for(int i=0;i<n;i++){
        string value;
        value.push_back(s[i]);
        for(int j=i+1;j<n;j++){
            value.push_back(s[j]);
            if(isPrime(value)){
                found=true;
                ans=value;
                break;
            }
            value.pop_back();
        }
        value.pop_back();
    }
    cout<<(!found?to_string(-1):ans)<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}