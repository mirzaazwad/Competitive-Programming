#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    string ans;
    for(char i='A';i<'A'+n;i++){
        ans.push_back(i);
    }
    cout<<ans<<endl;
    for(int i=1;i<k;i++){
        if(next_permutation(ans.begin(),ans.end()))cout<<ans<<endl;
        else break;
    }

}

int main()
{
    fastio;
    int t;
    cin >> t;
    
    for(int i=1;i<=t;i++)
    {
        cout<<"Case "<<i<<":"<<endl;
       solve();
    }
    return 0;
}
