# Graph Theory
Graph theory is one of the most essential parts of competitive programming contests and such, basically it deals with various types of graphs as defined mathematically(Discrete Mathematics)
in a way such that these graphs consists of edges that join one node to another. Nodes are essentially like leaves on a tree with the edges being joining them.
Graphs are a good starting point for understanding other data structures such as different forms of trees. A node is also often called a vertex. 
So there are many different ways to represent graphs as discussed here:
1) [Graph Theory MIT Playlist](https://www.youtube.com/playlist?list=PL6MpDZWD2gTF3mz26HSufmsIO-COKKb5j)
2) [Graph Theory from a Computer Science Perspective](https://youtu.be/LFKZLXVO-Dg)
3) [Detailed Mathematical Understanding of Graph Theory and other Discrete Mathematics Topics](https://www.youtube.com/playlist?list=PLDDGPdw7e6Aj0amDsYInT_8p6xTSTGEi2)
4) Understanding of [recursion](https://youtu.be/ngCos392W4w) A fundamental part of understanding the intricacy of graph theory with respect to competitive programming.

## Representing Graphs Algorithimically

```CPP
#include<bits/stdc++.h>
using namespace std;

int n, m;
vector<pair<int, int>> edges;//Edge List
int adjMat[102][102];//Adjacency Matrix
vector<int> adjL[102];//Adjacency List

vector<pair<int, pair<int, int>>> edges2;//Weighted Edge List
vector<pair<int, int>> adjL2[102];//Weighted Adjacency List

int main()
{
    int i, a, b, w;
    cin >> n >> m;

    for(i = 0; i < m; i++)
    {
        cin >> a >> b;
        edges.push_back({min(a, b), max(a, b)});

        adjMat[a][b] = 1;
        adjMat[b][a] = 1;

        adjL[a].push_back(b);
        adjL[b].push_back(a);

        cin >> w;
        edges2.push_back({w, {a, b}});

        adjMat[a][b] = w;
        adjMat[b][a] = w;

        adjL2[a].push_back({w, b});
        adjL2[b].push_back({w, a});
    }
}
```

## DFS Implementation

Representing DFS Algorithimically

###### Method 1:
```CPP
#include <bits/stdc++.h>

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

#define endl "\n"

using namespace std;

bool vis[12];
vector<int>v[12];
vector<int>parent(12,-1);

void dfs(int node,int par){
    vis[node]=true;
    parent[node]=par;
    for(auto u:v[node]){
        if(!vis[u]){
            dfs(u,node);
        }
    }
}

int main()
{
    fastio;
    int a,b;
    for(int i=0;i<9;i++){
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    dfs(6,0);
    for(int i=0;i<12;i++){
        cout<<i<<" "<<parent[i]<<"\n";
    }
    return 0;
}
```
DFS stands for Depth-First Search, in this case, we traverse the graph or tree from the root node to the tip of another branch before moving on to the next branch. Essentially we keep following edges, going deeper and deeper into the graph, when we reach a node that has no edges to any other nodes, we go back to the previous node and continue the process. Here I implemented it using recursion(Method 1), as recursion can be used as a replacement for stack, instead of recursion a more theoretical approach would be to use a stack(Method 2) to keep track of the exploration track, pushing a node when we explore it and popping a node when we go back. The backtracking strategy explores solutions this way. The recursion approach is more suitable for Competitive Programming.

## BFS Implementation

Understanding the concepts of DFS and BFS: [Click Here](https://youtu.be/pcKY4hjDrxk)

Understanding the concepts of How Recursion Can be Used in a similar way to stack: [Click Here](https://youtu.be/ygK0YON10sQ)

Visualising Graphs and Graph traversals. [Click Here](https://csacademy.com/app/graph_editor/)

