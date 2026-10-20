class Solution {
public:

// By DFS

    bool checkBipartiteBFS(vector<vector<int>>&adj,int curr , vector<int>&color,int currcolor)
    {
        color[curr]=currcolor;

        for(int &v:adj[curr])
        {
            if(color[v]==color[curr]){
            return false;
            }

            if(color[v]==-1)
            {
                color[v]=1-color[curr];
            
            if(checkBipartiteBFS(adj,v,color,color[v])==false)
            {
                return false;
            }
            }
            
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) 
    {
        int v=graph.size();
        vector<int>color(v,-1);
        for(int i=0;i<v;i++)
        {
            if(color[i]==-1)
            {
                if(checkBipartiteBFS(graph,i,color,1)==false)
                return false;
            }
        }
        return true;
        
    }
};