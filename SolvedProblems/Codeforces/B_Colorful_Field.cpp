#include<bits/stdc++.h>
using namespace std;
int waste[1000002];

int main(void)
{
    int n,m,k,t;
    cin >> n >> m >> k >> t;
    map<pair<int,int>,bool>mp;
    for(int i=0;i<k;i++){
        int a,b;cin>>a>>b;
        mp[{a,b}]=true;
        waste[i]=(a-1)*m+b;
    }
    sort(waste,waste+k);
    for(int i=0;i<t;i++){
        int x,y;
        cin>>x>>y;
        if(mp[{x,y}]){
            cout<<"Waste"<<endl;
            continue;
        }
        int ex=(x-1)*m+y;
        int wa=lower_bound(waste,waste+k,ex)-waste;
        ex-=wa;

        switch(ex%3){
            case 0:
            cout<<"Grapes"<<endl;
            break;
            case 1:
            cout<<"Carrots"<<endl;
            break;
            case 2:
            cout<<"Kiwis"<<endl;
            break;
        }
    }

}