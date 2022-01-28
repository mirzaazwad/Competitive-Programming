#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int t;
    cin >> t;
    
    while(t--)
    {
        int n,k;cin>>n>>k;
        pair<int,int>p[n];
        for(int i=0;i<n;i++){
            cin>>p[i].first;
        }
        for(int i=0;i<n;i++){
            cin>>p[i].second;
        }
        sort(p,p+n);
        int sum=k;
        for(int i=0;i<n;i++){
            if(p[i].first<=sum){
                sum+=p[i].second;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
