class Solution {
public:
    double solve(int a, int b, vector<vector<double>>& dp) {
        if (a <= 0 && b <= 0) return 0.5; // both empty
        if (a <= 0) return 1.0;           // A empty first
        if (b <= 0) return 0.0;           // B empty first
        if (dp[a][b] != -1) return dp[a][b];

        return dp[a][b] = 0.25 * (
            solve(a - 100, b, dp) +
            solve(a - 75, b - 25, dp) +
            solve(a - 50, b - 50, dp) +
            solve(a - 25, b - 75, dp)
        );
    }

    double soupServings(int n) {
        // For large n, probability approaches 1
        if (n >= 4800) return 1.0;
        vector<vector<double>> dp(n + 1, vector<double>(n + 1, -1));
        return solve(n, n, dp);
    }
};