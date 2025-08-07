class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int c=0,e=-1;
        for(int i=0;i<n;i++){
            if(c==0)e=nums[i];
            if(nums[i]==e)c++;
            else c--;
        }
        int k=0;
        for(auto it:nums)if(it==e)k++;
        return k>n/2?e:1;
    }
};