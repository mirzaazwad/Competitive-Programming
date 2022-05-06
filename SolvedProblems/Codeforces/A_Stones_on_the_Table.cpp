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
    string stones;
    cin>>stones;
    int count=0;
    for(int i=1;i<n;i++){
        if(stones[i]==stones[i-1]){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}