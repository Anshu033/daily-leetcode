class Solution {
public:

// DFS  ->

void dfs(unordered_map<int,vector<int>>&adj,int source,int destination,vector<bool>&visited)
{
   visited[source]=true;

    for(auto &it:adj[source])
    {
        if(!visited[it])
        {
            dfs(adj,it,destination,visited);
        }
    }
    
}
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) 
    {
        unordered_map<int,vector<int>>adj;
        for(vector<int>&edge:edges)
        {
            int u=edge[0];
            int v=edge[1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<bool>visited(n,false);

        dfs(adj,source,destination,visited);
        return visited[destination];
    }
};