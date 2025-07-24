class Solution {
public:
    void sortColors(vector<int>& nums){
        vector<int>k(3,0);
        for(auto it:nums)k[it]++;
        nums.clear();
        int i=0;
        while(i<3){
            while(k[i]!=0){
                nums.push_back(i);
                k[i]--;
            }
            i++;
        }
        return ;  
    }
};