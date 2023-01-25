#include <iostream>
#include<map>
#include<unordered_set>
#include<climits>
using namespace std;
#define fast_input ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl "\n"
#define ull unsigned long long
const ull hs = 3797;
int MaxLength=INT_MIN;
unordered_set<ull>ban_hash;



int printSubstrings(string str,int sz)
{
    unordered_set<ull>s;
    for (int i = 0; i < sz; i++) {
        ull hash = 0;
        ull p_pow = 1;
        for (int j = i;j<sz && j<i+MaxLength; j++){
            hash = hash + (tolower(str[j]) - 'a' + 1) * p_pow;
            p_pow = p_pow * hs;
            if(ban_hash.find(hash)!=ban_hash.end()){
              s.insert(hash);
            }
        }
    }
    return s.size();
}

ull get_hash(string s,int sz) {
    ull hash = 0;
    ull p_pow = 1;
    for(int i = 0; i < sz; i++) {
        hash = hash + (tolower(s[i]) - 'a' + 1) * p_pow;
        p_pow = p_pow * hs;
    }
    return hash;
}

int main()
{
    fast_input;
    int n,m;
    cin>>n>>m;
    string banned;
    for(int i=0;i<n;i++){
      cin>>banned;
      int sz=banned.size();
      ban_hash.insert(get_hash(banned,sz));
      MaxLength=max(MaxLength,sz);
    }
    string message;
    for(int i=0;i<m;i++){
      cin>>message;
      cout<<printSubstrings(message,message.size())<<endl;
    }
    return 0;
}