class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int count=0 ,i=0,ele;
        while(i<n){
            if(count==0){count++;ele=nums[i];i++;continue;}
            if(nums[i]==ele){count++;i++;}
            else {
                count--;i++;}

            
        

        }int k;
        for(int i=0;i<n;i++){
            if(nums[i]==ele)k++;
        }
        return (k>n/2)?ele:1;
        
    }
};