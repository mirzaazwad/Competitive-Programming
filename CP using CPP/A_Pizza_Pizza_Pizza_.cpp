#include<bits/stdc++.h>
using namespace std;

int main(){
    unsigned long long int n;
    cin>>n;
    if(n==0){
        cout<<0<<endl;
        return 0;
    }
    if(!((n+1)%2))cout<<(n+1)/2<<endl;
    else cout<<(n+1)<<endl;
    return 0;
}