//The problem is from codeforces gym, link: https://codeforces.com/gym/101807/problem/K
#include <bits/stdc++.h>

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl "\n"

using namespace std;


int main(void){
    fastio;
    int numsetbit[]={6,2,5,5,4,5,6,3,7,6}; //number of set bits as per 7 segment display
    unordered_map<int,int>mp;
    mp[24]=mp[25]=mp[52]=mp[29]=mp[62]=1;
    for(int i=0;i<10;i++){
        if(i==1 or i==2 or i==5 or i==6)continue;//these are exceptional cases that are dealt with earlier
        mp[10*i+0]=mp[10*i+6]=mp[10*i+8]=2;//these have matching sides
    }
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        cout<<numsetbit[n/10]+numsetbit[n%10]-mp[n]<<endl;//subtract the common side(mp[n])
    }


    return 0;
}
