class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int ,int>mp;
        int k =nums.size()/2;
        for(auto it:nums)mp[it]++;
        for(auto[a,b] :mp){
            if(b==k)return a;
        }


return 1;
        
    }
};