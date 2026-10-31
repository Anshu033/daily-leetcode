class MyCalendar {
public:

    MyCalendar() {
        
    }
    vector<vector<int>>intervals;

    bool book(int startTime, int endTime) 
    {
        for(auto interval:intervals)
        {
            if(startTime<interval[1] && interval[0]<endTime)
            {
                return false;
            }
        }
        intervals.push_back({startTime, endTime});
        return true;

        
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(startTime,endTime);
 */