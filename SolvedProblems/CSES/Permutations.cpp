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
    if(n==1){
        cout<<1<<endl;
        return 0;
    }
    if(n<4){
        cout<<"NO SOLUTION"<<endl;
        return 0;
    }
    if(n==4){
        cout<<2<<" "<<4<<" "<<1<<" "<<3<<endl;
    }
    for(int i=n;i>0;i-=2){
        cout<<i<<" ";
    }
    for(int i=n-1;i>0;i-=2){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}