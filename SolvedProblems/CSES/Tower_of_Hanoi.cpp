#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
vector<pair<int,int>>s;

void tower_of_hanoi(int n,int a,int b,int c){
    if(n>0){
        tower_of_hanoi(n-1,a,c,b);
        s.emplace_back(a,c);
        tower_of_hanoi(n-1,b,a,c);
    }
}

int main()
{
    fastio;
    int n;
    cin>>n;
    tower_of_hanoi(n,1,2,3);
    cout<<s.size()<<endl;
    for(auto u:s){
        cout<<u.first<<" "<<u.second<<endl;
    }
    return 0;
}