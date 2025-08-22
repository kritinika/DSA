class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int s=-1,e=-1;
        //starting
        int i=0,j=n-1;
        while(i<=j){
            int mid=i+(j-i)/2;
            if(nums[mid]==target){
                if(mid==0){
                    s=mid;
                    break;
                }
                if(nums[mid-1]<nums[mid]){
                    s=mid;
                    break;
                }
                else if (nums[mid-1]==nums[mid]){
                    j=mid-1;
                }
            }
            else if(nums[mid]>target)j=mid-1;
            else i=mid+1;
        }
        //end
        i=0,j=n-1;
         while(i<=j){
            int mid=i+(j-i)/2;
            if(nums[mid]==target){
                if(mid==n-1){
                    e=mid;
                    break;
                }
                else if(nums[mid+1]>nums[mid]){
                    e=mid;
                    break;
                }
                else {
                    i=mid+1;
                }
            }
            else if(nums[mid]>target)j=mid-1;
            else i=mid+1;
        }
        return {s,e};

    }
};