class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        if(nums.size()==1)return ;
        int l=1;
        for(l;l<nums.size();l++){
            if(nums[l]==nums[l-1])continue;
            else break;
        }
        if(l==nums.size())return ;
        int n=nums.size();
        int pos=-1;
        for(int j=n-2;j>=0;j--){
            if(nums[j]>=nums[j+1])continue;
            else{
                pos=j; 
                break;
            }
        }
       if(pos==-1){
        reverse(nums.begin(),nums.end());
        return ;
       }
       int num=INT_MAX,r=n;
       for(int j=n-1;j>pos;j--){
        if(nums[j]<num&&nums[j]>nums[pos]){
            num=nums[j];
            r=j;
        }
        
       }
       swap(nums[pos],nums[r]);
       sort(nums.begin()+pos+1,nums.end());
       return ;
    }
};