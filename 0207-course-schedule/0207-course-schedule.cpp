class Solution {
public:

    bool topologicalSortCheck(unordered_map<int,vector<int>>adj,int numCourses,vector<int>&indegree)
    {
        queue<int>q;
        int count=0;

        for(int i=0;i<numCourses;i++)
        {
            if(indegree[i]==0)
            q.push(i);

        }
        while(!q.empty())
        {
            int u=q.front();
            q.pop();
            count++;

            for(int &v:adj[u])
            {
                indegree[v]--;

                if(indegree[v]==0)
                q.push(v);
            }
        }
        if(count==numCourses)
        {
            return true;
        }
        return false;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) 
    {
        unordered_map<int,vector<int>>adj;
        vector<int>indegree(numCourses,0);

        for(auto &vec:prerequisites)
        {
            int a=vec[0];
            int b=vec[1];

            adj[b].push_back(a);
            indegree[a]++;
        }
        return topologicalSortCheck(adj,numCourses,indegree); // bfs calll
        
    }
};