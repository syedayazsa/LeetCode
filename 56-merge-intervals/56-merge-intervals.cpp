class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        vector<vector<int>> mergedIntervals;
        if(intervals.size() == 0) return mergedIntervals;
        
        sort(intervals.begin(), intervals.end());
        
        for(auto x : intervals){
            if(mergedIntervals.empty() or x[0] > mergedIntervals.back()[1]) mergedIntervals.push_back(x);
            else mergedIntervals.back()[1] = max(mergedIntervals.back()[1], x[1]);
        }
        return mergedIntervals; 
    }
};


