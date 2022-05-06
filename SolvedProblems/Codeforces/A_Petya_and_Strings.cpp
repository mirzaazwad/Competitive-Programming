#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    string s,t;
    cin>>s>>t;
    int len=s.length();
    for(int i=0;i<len;i++){
        s[i]=tolower(s[i]);
        t[i]=tolower(t[i]);
    }
    if(s==t){
        cout<<0<<endl;
    }
    else if(s>t){
        cout<<1<<endl;
    }
    else{
        cout<<-1<<endl;
    }
    
    return 0;
}