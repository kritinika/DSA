class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count =0,ele;
        int n =nums.size();
        for(int i=0;i<n;i++){
            if(count ==0){count++;
            ele=nums[i];continue;
            }
            else if(nums[i]==ele)count ++;
            else  count--;
        }
        int k;
        for(int i=0;i<n;i++){
            if(nums[i]==ele)k++;
        }
 return (k>n/2)?ele:1;

      
        
    }
};