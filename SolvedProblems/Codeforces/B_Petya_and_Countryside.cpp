#include<bits/stdc++.h>
using namespace std;

int main(void){
    int n;
    cin>>n;
    int maximal=INT_MIN;;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        int wateredsection=1;
        int level=arr[i];
        for(int j=i+1;j<n;j++){
            if(arr[j]>level)break;
            wateredsection++;
            level=arr[j];
        }
        level=arr[i];
        for(int j=i-1;j>=0;j--){
            if(arr[j]>level)break;
            wateredsection++;
            level=arr[j];
        }
        maximal=max(maximal,wateredsection);
    }
    cout<<maximal<<endl;

    return 0;
}