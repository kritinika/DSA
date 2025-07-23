class Solution {
public:
    int majorityElement(vector<int>& nums){
        int n =nums.size()/2;
        int ans;
        unordered_map<int ,int>mp;
        for(auto it:nums)mp[it]++;
        for(auto it:mp){
            if(it.second>n)ans=it.first;
    
        }
return ans;
        
    }
};