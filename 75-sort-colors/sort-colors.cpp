class Solution {
public:
    void sortColors(vector<int>& nums){
        vector<int>k(3,0);
        for(int it:nums)k[it]++;
        nums.clear();
        int i=0;
        while(i<3){
            if(k[i]>0){nums.push_back(i);k[i]--;}
            else{
                i++;
            }
        }
     
        
        
    }
};