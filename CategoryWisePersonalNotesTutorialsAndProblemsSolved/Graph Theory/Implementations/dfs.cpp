#include<bits/stdc++.h>
using namespace std;

vector<int>color;
vector<int>parent;
vector<int>dist;
vector<int>f;
vector<int>s;
vector<vector<int>>adj;

void dfs_visit(int u,int& time){
    color[u]=-1;
    time=time+1;
    s[u]=time;
    for(auto v:adj[u]){
        if(!color[v]){
            dist[v]=dist[u]+1;
            parent[v]=u;
            dfs_visit(v,time);
        }
    }
    color[u]=1;
    time=time+1;
    f[u]=time;
}

void print_path(int start,int finish){
    if(finish==start){
        cout<<start<<endl;
        return;
    }
    else if(parent[finish]==-1){
        cout<<"No path exists to start"<<endl;
    }
    else{
        cout<<finish<<" ";
        print_path(start,parent[finish]);
    }


}

void dfs(int n,int m){
    parent.assign(n+1,-1);
    dist.assign(n+1,0);
    color.assign(n+1,0);
    f.assign(n+1,0);
    s.assign(n+1,0);
    for(int i=1;i<=n;i++){
        if(!color[i]){
            int time=0;
            dfs_visit(i,time);
        }
    }
//    print_path(1,6);
    for(int i=1;i<=n;i++){
        cout<<i<<": "<<s[i]<<" "<<f[i]<<endl;//prints finish time and start time for each node
    }
}

int main(void){
    int n,m;
    cin>>n>>m;
    adj.resize(n+1);
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    dfs(n,m);
}


/*
15 14
1 2
1 3
2 4
2 5
3 6
3 7
4 8
4 9
5 10
5 11
6 12
6 13
7 14
7 15
*/
