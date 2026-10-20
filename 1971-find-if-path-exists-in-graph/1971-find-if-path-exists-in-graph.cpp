class Solution {
public:

// DFS  ->

bool dfs(unordered_map<int,vector<int>>&adj,int source,int destination,vector<bool>&visited)
{
    if(source==destination)
    return true;

    if(visited[source]==true)
    return false;

    visited[source]=true;

    for(auto &it:adj[source])
    {
        if(dfs(adj,it,destination,visited)==true)
        return true;
    }
    return false;
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

        return dfs(adj,source,destination,visited);
    }
};