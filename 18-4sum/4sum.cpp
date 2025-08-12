class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(i>0&&nums[i]==nums[i-1])continue;
            for(int j=i+1;j<n;){
                int k=j+1,l=n-1;
                while(k<l){
                long long sum =(long long)nums[i]+(long long)nums[j]+(long long)nums[k]+nums[l];
                    if(sum<target)k++;
                 else if(sum>target)l--;
                    else {
                         ans.push_back({nums[i],nums[j],nums[k],nums[l]});
                        k++;l--;
                        
                        while(k<l&&nums[k]==nums[k-1])k++;
                    }
                    
                }
                j++;
                while(j<n&&nums[j]==nums[j-1])j++;
            }

            
        }
        return ans;
    }
};