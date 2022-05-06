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
    cin >> s >> t;
    int t_len=t.length();
    int s_len=s.length();
    int j=0;
    for(int i=0;i<t_len;i++){
        if(s[j]==t[i]){
            j++;
        }
    }
    cout<<j+1<<endl;
    return 0;
}