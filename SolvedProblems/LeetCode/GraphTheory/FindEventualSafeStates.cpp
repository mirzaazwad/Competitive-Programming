class Solution
{
public:

  vector<int> eventualSafeNodes(vector<vector<int>> &graph)
  {
    vector<int>indegree(graph.size(),0);
    vector<int>adj[graph.size()];
    for(int i=0;i<graph.size();i++){
      for(auto u:graph[i]){
        adj[u].push_back(i);
        indegree[i]++;
      }
    }
    queue<int>q;
    vector<int>ans;
    for(int i=0;i<graph.size();i++){
      if(!indegree[i]){
        q.push(i);
      }
    }
    while(!q.empty()){
      int tmp=q.front();
      q.pop();
      ans.push_back(tmp);
      for(auto u:adj[tmp]){
        indegree[u]--;
        if(!indegree[u]){
          q.push(u);
        }
      }
    }
    sort(ans.begin(), ans.end());
    return ans;
  }
};
