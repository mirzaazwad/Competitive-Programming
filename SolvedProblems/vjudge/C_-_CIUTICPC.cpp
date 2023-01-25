#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
#define ll long long
using namespace std;

bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}

int main()
{
    int n;
    cin>>n;
    vector<ll>arr(n);
    for(ll &i:arr)cin>>i;
    int Max=max_element(arr.begin(),arr.end())-arr.begin();
    ll round=floor(log10(arr[Max])+1);
    vector<pair<ll,ll>>vp;
    for(int j=1;j<=round;j++){
      vector<pair<ll,ll>>vp;
      for(int i=0;i<n;i++){
        vp.emplace_back(arr[i],arr[i]%(ll)(pow(10,j)));
      }
      sort(vp.begin(),vp.end(),sortbysec);
      int count=0;
      for(int i=0;i<n-1;i++){
        arr[i]=vp[i].first;
        cout<<arr[i]<<" ";
      }
      arr[n-1]=vp[n-1].first;
      cout<<arr[n-1]<<endl;
    }

    return 0;
}