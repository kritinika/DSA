class Solution {
public:
    vector<int> maxValue(vector<int>& nums){
           int n = nums.size();
        std::vector<int> ans(n);

        if (n == 0) {
            return ans;
        }

        std::vector<int> pre_max(n);
        pre_max[0] = nums[0];
           for (int i = 1; i < n; ++i) {
            pre_max[i] = std::max(pre_max[i - 1], nums[i]);
        }

        std::vector<int> suf_min(n);
        suf_min[n - 1] = nums[n - 1];
        for (int i = n - 2; i >= 0; --i) {
            suf_min[i] = std::min(suf_min[i + 1], nums[i]);
        }

        int start = 0;
        for (int i = 0; i < n - 1; ++i) {
            if (pre_max[i] <= suf_min[i + 1]) {
                int current_max = 0;
                for (int j = start; j <= i; ++j) {
                    current_max = std::max(current_max, nums[j]);
                }
                for (int j = start; j <= i; ++j) {
                    ans[j] = current_max;
                }
                start = i + 1;
            }
        }
        
        int last_block_max = 0;
        for (int j = start; j < n; ++j) {
            last_block_max = std::max(last_block_max, nums[j]);
        }
        for (int j = start; j < n; ++j) {
            ans[j] = last_block_max;
        }

        return ans;

        
    }
};