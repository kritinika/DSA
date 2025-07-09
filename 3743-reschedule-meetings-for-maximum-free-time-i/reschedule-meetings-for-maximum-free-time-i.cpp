class Solution {
public:
    int maxFreeTime(int eventTime, int k, vector<int>& startTime, vector<int>& endTime){
        vector<int> gaps;
        gaps.reserve(startTime.size() + 1);
        gaps.push_back(startTime[0]);
        for(size_t i = 1; i < startTime.size(); ++i){
            gaps.push_back(startTime[i] - endTime[i - 1]);
        }
        gaps.push_back(eventTime - endTime.back());
        int win = accumulate(gaps.begin(), gaps.begin() + k + 1, 0);
        int ans = win;
        for(size_t i = k + 1; i < gaps.size(); ++i) {
            win += gaps[i] - gaps[i - k - 1];
            ans = max(ans, win);
        }
        return ans;
    }
};
