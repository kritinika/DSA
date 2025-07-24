class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int curr=nums[0],c=0;
        for(int i=0;i<nums.size();i++){
            if(c==0){
                curr=nums[i];
            }
            if(nums[i]==curr)c++;
            else c--;

        }
        int k=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==curr)k++;

        }
        if(k>nums.size()/2)return curr;
        return -1;
    }
};