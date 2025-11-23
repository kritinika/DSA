class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count =0;
        int ele=nums[0];
        for(int i=0;i< nums.size();i++){
            if(nums[i]==ele)count++;
            else count--;
            if(count<0){ele=nums[i];count++;}
        }
        int k=0;
        for(auto it:nums){if(it==ele)k++;}
        if(k>nums.size()/2)return ele;
        return 0;
        
    }
};