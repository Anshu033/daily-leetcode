class Solution {
public:
int minGroups(vector<vector<int>>& intervals)
{
int n = intervals.size();
    vector<int> start, end;

    // Store start and end separately
    for(auto interval : intervals)
    {
        start.push_back(interval[0]);
        end.push_back(interval[1]);
    }

    sort(start.begin(), start.end());
    sort(end.begin(), end.end());

    int i = 0, j = 0;
    int groups = 0, ans = 0;

    while(i < n)
    {
        if(start[i] <= end[j])
        {
            groups++;
            ans = max(ans, groups);
            i++;
        }
        else
        {
            groups--;
            j++;
        }
    }

    return ans;
}

};
