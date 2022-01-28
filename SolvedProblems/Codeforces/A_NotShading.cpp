#include <bits/stdc++.h>

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl "\n"
#define SIZE 200000
using namespace std;

long long gcd(long long a,long long b){
    if(b==0)return a;
    else return gcd(b,a%b);
}

string grid[52];

void solve(){
    int n,m,r,c;cin>>n>>m>>r>>c;
    cin.ignore();
    vector<pair<int,int>>blacks;
    for(int i=0;i<n;i++){
            getline(cin,grid[i]);
            for(int j=0;j<m;j++){
                if(grid[i][j]=='B'){
                    blacks.push_back({i,j});
                }
            }
    }
    if(grid[r-1][c-1]=='B'){
        cout<<0<<endl;
        return;
    }
    if(blacks.empty()){
        cout<<-1<<endl;
        return;
    }
    for(auto u:blacks){
        if(u.first+1==r || u.second+1==c){
            cout<<1<<endl;
            return;
        }
    }
    cout<<2<<endl;
    return;
}

int main(void){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
