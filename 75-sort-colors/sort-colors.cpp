class Solution {
public:
    void sortColors(vector<int>& nums){
        int n=nums.size();
        vector<int>arr(3,0);
        for(auto it:nums)arr[it]++;
        nums.clear();
        int i=0;
        while(i<3){
        while(arr[i]!=0){
            nums.push_back(i);
            arr[i]--;
        }
            i++;
        

    }
      
        


        
    }
};