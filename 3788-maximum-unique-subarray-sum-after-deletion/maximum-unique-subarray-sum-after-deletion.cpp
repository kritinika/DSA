class Solution {
public:
    int maxSum(vector<int>& nums){
     vector<int>arr(101,-1);
        int sum=0;
        int maxneg =INT_MIN;
        for(auto &it:nums){
            if(it<=0)maxneg=max(maxneg,it);
            else if(arr[it]==-1){ sum+=it;
                    arr[it]=1;    
            }

        }
        return sum == 0 ? maxneg :sum;
        
    }
};