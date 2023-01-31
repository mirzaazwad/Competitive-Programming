class Solution {
public:
    bool vis[105][105];
    int n,m;
    int dfs(int sx,int sy,vector<vector<int>>& grid){
        int dirx[]={0,0,-1,1};
        int diry[]={-1,1,0,0};
        if(sx<0 || sx>n-1 || sy<0 || sy>m-1){
            return 1;
        }
        if(vis[sx][sy])return 0;
        if(grid[sx][sy]==0)return 1;
        vis[sx][sy]=true;
        int ret=0;
        for(int i=0;i<4;i++){
            int x=sx+dirx[i];
            int y=sy+diry[i];
            ret+=dfs(x,y,grid);
        }
        return ret;
    }
    int islandPerimeter(vector<vector<int>>& grid) {
        memset(vis,false,sizeof(vis));
        n=grid.size();
        m=grid.front().size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    return dfs(i,j,grid);
                }
            }
        }
        return 0;
    }
};