#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
#define ll long long

using namespace std;

int main()
{
    fastio;
    int n,m;
    cin>>n>>m;
    vector<int>v(n),prefix(n),suffix(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(i==0)prefix[i]=v[i];
        else prefix[i]=prefix[i-1]+v[i];
    }
    for(int i=n-1;i>=0;i--){
        if(i==n-1)suffix[i]=v[i];
        else suffix[i]=suffix[i+1]+v[i];
    }
   
    for(int i=0;i<m;i++){
        int q;
        cin>>q;
         unordered_set<int>s;
        if(q==0){
            cout<<"Yes"<<endl;
            continue;
        }
        for(int j=0;j<n;j++){
            if(prefix[j]==q || suffix[j]==q){
                cout<<"Yes"<<endl;
                break;
            }
            if(s.find(q-suffix[j])!=s.end()){
                cout<<"Yes"<<endl;
                break;
            }
            s.insert(prefix[j]);
            if(j==n-1){
                cout<<"No"<<endl;
                break;
            }
        }
    }

    return 0;
}
