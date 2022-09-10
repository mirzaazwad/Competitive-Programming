#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

void solve(){
    set<char>s;
    for(int i=0;i<4;i++){
        char tmp;
        cin>>tmp;
        s.insert(tmp);
    }
    cout<<s.size()-1<<endl;
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