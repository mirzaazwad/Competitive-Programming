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
    int tc;
    cin>>tc;
    while(tc--){
      int n;
      cin>>n;
      vector<ll>arr(n);
      int one_count=0,n_one=0;
      for(ll &i:arr){
        cin>>i;
        if(i==1)one_count++;
        else n_one++;
      }
      cout<<(one_count+1)/2+n_one<<endl;
      
    }
    return 0;
}