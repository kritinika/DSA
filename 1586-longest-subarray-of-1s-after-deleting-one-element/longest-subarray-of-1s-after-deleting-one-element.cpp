class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n =nums.size();
        int ans =0;
        int left =0,zeros =0;
        for(int r=0;r<n;r++){
            if(nums[r]==0)zeros++;
            while(zeros>1){
                if(nums[left]==0)zeros--;
                left++;
            }
            ans =max(ans,r-left);
        }
        
        return ans;
    }
};