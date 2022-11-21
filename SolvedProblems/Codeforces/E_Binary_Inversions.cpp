#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
#define ll long long

using namespace std;

ll findAns(vector<int>arr,int n){
    int zeroCount=0;
    vector<int>zerosAfter(n);
    for(int i=n-1;i>=0;i--){
        zerosAfter[i]=zeroCount;
        if(arr[i]==0){
            zeroCount++;
        }
    }
    ll res=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            res+=zerosAfter[i];
        }
    }
    return res;
}

void solve(){
    int n;
    cin>>n;
    vector<int>arr(n),arr2(n),arr3(n);
    for(int &i:arr){
        cin>>i;
    }
    for(int i=0;i<n;i++){
        arr2[i]=arr3[i]=arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr2[i]==0){
            arr2[i]=1;
            break;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(arr3[i]==1){
            arr3[i]=0;
            break;
        }
    }
    cout<<max(findAns(arr,n),max(findAns(arr2,n),findAns(arr3,n)))<<endl;
    
}

int main()
{
    fastio;
    int t;
    cin >> t;
    
    while(t--)
    {
       solve();
    }
    return 0;
}