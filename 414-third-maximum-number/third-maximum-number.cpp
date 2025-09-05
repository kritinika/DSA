class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n=nums.size();
        if(n==1)return nums[0];
        sort(nums.begin(),nums.end());
        priority_queue<int>pq;
        for(int i=0;i<n;i++){
            if(!pq.empty()&&pq.top()==nums[i])continue;
            else pq.push(nums[i]);
        }
        pq.pop();pq.pop();
        if(!pq.empty())return pq.top();
        return nums[n-1];
    }
};