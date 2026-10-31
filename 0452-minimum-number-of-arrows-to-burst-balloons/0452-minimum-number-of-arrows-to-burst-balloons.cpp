class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) 
    {
        sort(points.begin(),points.end());

        int n=points.size();
        int count=1;
        int prev=points[0][1];

        for(int i=1;i<n;i++)
        {
            if(prev>=points[i][0])
            {
                prev=min(prev,points[i][1]);
            }
            else
            {
                count++;
                prev=points[i][1];
            }
        }
        return count;
    }
};