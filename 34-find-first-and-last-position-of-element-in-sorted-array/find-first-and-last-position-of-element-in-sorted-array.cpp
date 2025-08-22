class Solution {
public:
int first(vector<int>nums,int target){
    int n =nums.size();
        int start =0,end =n-1;
        while(start<=end){
             int mid =start+(end-start)/2;
             if(mid==0&&nums[mid]==target)return mid;
             if(nums[mid]==target&&nums[mid-1]<nums[mid])return mid;
            if(nums[mid]==target&&nums[mid-1]==target)end=mid-1;
            else if(target>nums[mid])start=mid+1;
            else end=mid-1;
        }
return -1;
}
int second(vector<int>nums,int target){
    int n =nums.size();
    int start =0,end =n-1;
    while(start<=end){
        int mid =start+(end-start)/2;
             if(mid==n-1&&nums[mid]==target)return mid;
             if(nums[mid]==target&&nums[mid+1]>target)return mid;
             if(nums[mid]==target&&nums[mid+1]==target)start=mid+1;
              else if(target>nums[mid])start=mid+1;
              else end =mid-1;
    }
return -1;
}
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>arr;
        int a=first(nums,target);
        int b=second(nums,target);
    arr.push_back(a);
    arr.push_back(b);

    return arr;


    
        
    }
};