#include<bits/stdc++.h>
using namespace std;
#define INF INT_MAX
vector<int>parent;
vector<int>color;
vector<int>dist;
vector<vector<int>>adj;

void bfs(int start){
    queue<int>q;
    q.push(start);
    color[start]=1;
    dist[start]=0;
    while(!q.empty()){
        int u=q.front();
        for(auto v:adj[u]){
            if(!color[v]){
                color[v]=1;
                q.push(v);
                dist[v]=dist[u]+1;
                parent[v]=u;
            }
        }
        q.pop();
        color[u]=-1;
    }
}

void print_path(int start,int finish){
    if(finish==start){
        cout<<start<<" ";
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

int main(void){
    int n,m;
    cin>>n>>m;
    parent.assign(n+1,-1);
    color.assign(n+1,0);
    dist.assign(n+1,INF);
    adj.resize(n+1);
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    bfs(1);
    print_path(1,15);
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
