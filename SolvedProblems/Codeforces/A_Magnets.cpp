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
    string magnetPairs[n];
    for(int i=0;i<n;i++){
        cin>>magnetPairs[i];
    }
    int count=1;
    for(int i=1;i<n;i++){
        if(magnetPairs[i][0]==magnetPairs[i-1][1]){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}