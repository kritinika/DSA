class Solution {
public:
    void sortColors(vector<int>& nums) {
       map<int,int>st;
        for(auto it:nums)st[it]++;nums.clear();
        for(auto it:st){
            while(it.second>0){nums.push_back(it.first);it.second--;}
        }
    }
};