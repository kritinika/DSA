class Solution {
public:
    int maxProfit(vector<int>& p) {
        int n=p.size();
        int curr=0;
        vector<int>dp(n,0);
        for(int i=1;i<n;i++){
            curr=max(0,curr+p[i]-p[i-1]);
            dp[i]=max(curr,dp[i-1]);

        }
        return dp[n-1];

    }
};