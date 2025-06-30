class Solution {
public:
    int findLHS(vector<int>& nums) {
        map<int,int>mpp;
        for(auto it:nums){
            mpp[it]++;
        }
        int ans=0,i=0;
        for(auto it:mpp){
            
            int num1=it.first-1;
            if(mpp.find(num1)!=mpp.end())ans=max(ans,it.second+mpp[num1]);
        }
        return ans;
    }
};