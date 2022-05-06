#include<bits/stdc++.h>
using namespace std;

int main(void){
    int n,h;
    cin>>n>>h;
    int heightsOfFriends[n];
    for(int i=0;i<n;i++)cin>>heightsOfFriends[i];
    int width=0;
    for(int i=0;i<n;i++){
        if(heightsOfFriends[i]<=h)width+=1;
        else width+=2;
    }
    cout<<width<<endl;
}
