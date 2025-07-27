class Solution {
public:
    int countHillValley(vector<int>& nums) {
        
int ans=0;
      for(int i=1;i<nums.size();i++){
int val=nums[i];
int j=i-1;

    // left wala 
    while(j>=0){
    if(nums[j]!=nums[i]) break;
    j--;
      }
int k=i+1;
while(k<nums.size()){
    if(nums[k]!=nums[i]) break;
    k++;
}

// valley
if((j>=0 && k<nums.size()) && ((nums[j]<nums[i] && nums[k]<nums[i]) || (nums[j]>nums[i] && nums[k]>nums[i])) ) ans++;

i=k-1;
      }
      return ans;
    }
   
};