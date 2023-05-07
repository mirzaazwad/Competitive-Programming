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
       int n;
       cin>>n;
       vector<int>arr(n);
       for(int &i:arr)cin>>i;
       int count=0,max_count=INT_MIN;
       for(int i=0;i<n;i++){
        if(arr[i]==0)count++;
        else{
          max_count=max(max_count,count);
          count=0;
        }
       }
       max_count=max(max_count,count);
       cout<<max_count<<endl;
    }
    return 0;
}