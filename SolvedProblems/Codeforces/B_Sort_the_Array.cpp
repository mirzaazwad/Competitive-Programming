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
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int start,end;
    start=end=-1;
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            if(start==-1){
                start=i-1;
            }
            end=i;
        }
    }
    if(start<end){
        reverse(arr+start,arr+end+1);
    }
    auto issorted=[](int arr[],int n) -> bool
    {
        bool isSorted=true;
        for(int i=1;i<n;i++){
            if(arr[i]<arr[i-1])return false;
        }
        return true;
    };
    cout<<endl;
    if(issorted(arr,n)){
        cout<<"yes"<<endl;
        if(start<end){
            cout<<++start<<" "<<++end<<endl;
        }
        else{
            cout<<1<<" "<<1<<endl;
        }
    }
    else{
        cout<<"no"<<endl;
    }
    return 0;
}