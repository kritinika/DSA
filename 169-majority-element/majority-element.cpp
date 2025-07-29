class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int ele;
        int val=0;
        for(int i=0;i<n;i++){
            if(val==0){
                val++;
                ele=nums[i];continue;
            }
            if(nums[i]==ele)val++;
            else val--;
        }
        int count=0;
        for(int i=0;i<n;i++){
            if(nums[i]==ele)count++;
        }
        return  (count>n/2)?ele:-1;

        
    }
};