class Solution {
public:
    void sortColors(vector<int>& nums) {
       map<int,int>st;
        for(auto it:nums)st[it]++;int i=0;
        for(auto it:st){
            while(it.second>0){nums[i++]=it.first;it.second--;}
        }
    }
};