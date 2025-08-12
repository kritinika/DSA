class Solution {
public:
const int mod =1e9+7;
 int dp[301][301];
    int solve(int n, int num,int x){
        if(n<0)return 0;
        if(n==0)return 1;
        if(pow(num,x)>n)return 0;
        if(dp[n][num]!=-1)return dp[n][num];
        int temp=pow(num,x);
        int left=solve(n-temp,num+1,x);
        int right=solve(n,num+1,x);
        return dp[n][num]=(right%mod+left%mod)%mod;

    
        }
    
    int numberOfWays(int n, int x){
        memset(dp,-1,sizeof(dp));
        return solve(n,1,x); 
    }
};