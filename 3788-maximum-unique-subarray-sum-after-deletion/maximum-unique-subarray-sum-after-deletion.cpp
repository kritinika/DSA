class Solution {
public:
    int maxSum(vector<int>& nums){
        unordered_set<int>arr;
        int sum=0;
        int maxneg =INT_MIN;
        for(auto &it:nums){
            if(it<=0)maxneg=max(maxneg,it);
            else {
                arr.insert(it);
            }
        }
        for(auto it:arr)sum+=it;
        return sum == 0 ? maxneg :sum;
        
    }
};