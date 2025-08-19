class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long ans = 0; 
        long long c = 0; 
        for (int x : nums) {
            if (x == 0) {
                c++;           // streak length badhao
                ans += c;      // contribution add karo
            } else {
                c = 0;         // streak break
            }
        }
        return ans;
    }
};