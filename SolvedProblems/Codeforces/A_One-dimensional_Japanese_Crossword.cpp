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
    int black_count=0;
    vector<int>blackCount;
    for(int i=0;i<n;i++){
        if(x[i]=='W'){
            if(black_count>0)blackCount.push_back(black_count);
            black_count=0;
        }
        else black_count++;
    }
    if(black_count>0)blackCount.push_back(black_count);
    n=blackCount.size();
    cout<<n<<endl;
    for(int i=0;i<n;i++)cout<<blackCount[i]<<" ";
    cout<<endl;
    return 0;
}