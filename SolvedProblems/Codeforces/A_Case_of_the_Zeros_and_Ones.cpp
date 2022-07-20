#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int n;
    cin>>n;
    string x;
    cin>>x;
    // cout<<n<<endl;
    // cout<<x<<endl;
    stack<char>s;
    for(int i=0;i<n;i++){
        char tmp=x[i];
        if(s.empty()){
            s.push(tmp);
        }
        else{
            if(s.top()!=tmp){
                s.pop();
            }
            else{
                s.push(tmp);
            }
        }
    }
    cout<<s.size()<<endl;
    return 0;
}