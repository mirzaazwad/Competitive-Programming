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
    for(int i=n+1;i<=9012;i++){
        string str=to_string(i);
        set<int>s;
        for(int j=0;j<4;j++){
            s.insert(str[j]);
        }
        if(s.size()==4){
            cout<<i<<endl;
            return 0;
        }


    }
    return 0;
}