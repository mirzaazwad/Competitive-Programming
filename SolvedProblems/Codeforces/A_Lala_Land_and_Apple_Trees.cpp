#include <bits/stdc++.h> 
using namespace std;


vector<pair<int,int>>pos,neg;
int main(){
    int n;
    cin>>n;
    int x,a;
    for(int i=0;i<n;i++){
        cin>>x>>a;
        if(x<0)neg.push_back({x,a});
        else pos.push_back({x,a});
    }
    sort(pos.begin(),pos.end());
    sort(neg.rbegin(),neg.rend());
    int apple=0;
    if(pos.size()==neg.size()){
        for(int i=0;i<pos.size();i++){
            apple+=(pos[i].second+neg[i].second);
        }
    }
    else if(pos.size()<neg.size()){
        int i=0;
        for(i=0;i<pos.size();i++){
            apple+=(pos[i].second+neg[i].second);
        }
        apple+=neg[i].second;
    }
    else if(neg.size()<pos.size()){
        int i=0;
        for(i=0;i<neg.size();i++){
            apple+=(pos[i].second+neg[i].second);
        }
        apple+=pos[i].second;
    }
    cout<<apple<<endl;
    return 0;
}