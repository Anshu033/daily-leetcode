class Solution {
public:

    // JITNI ROWS HAI UTNI CITIES H 

    void dfs(vector<vector<int>>&isConnected, int u ,vector<bool> &visited)
    {
        if(visited[u])
        return;

        visited[u]=true;
        for(int v=0;v<isConnected.size();v++)
        {
            if(isConnected[u][v]==1 && !visited[v])
            {
                dfs(isConnected,v,visited);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) 
    {
        int n = isConnected.size();
        vector<bool>visited(n,false);
        int provinces=0;
        for(int i=0;i<n;i++)
        {
            if(!visited[i])
            provinces++;

            dfs(isConnected,i,visited);
        }
        return provinces;
        
    }
};