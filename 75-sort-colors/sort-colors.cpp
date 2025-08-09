class Solution {
public:
    void sortColors(vector<int>& nums) {
       multiset<int>st;
        for(auto it:nums)st.insert(it);
        int i=0;
        for(auto it:st){
            nums[i++]=it;
        }
    }
};