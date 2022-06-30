#include<bits/stdc++.h>
using namespace std;

int main(void){
    int n,m;
    cin>>n;
    unordered_map<long long,pair<int,int>>mp;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        mp[x]={i+1,n-i};
    }
    cin>>m;
    long long v,p;
    v=p=0;
    for(int i=0;i<m;i++){
        int y;
        cin>>y;
        v+=mp[y].first;
        p+=mp[y].second;
    }
    cout<<v<<" "<<p<<endl;
}