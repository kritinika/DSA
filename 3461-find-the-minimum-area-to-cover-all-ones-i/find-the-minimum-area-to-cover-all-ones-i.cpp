class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int l=INT_MAX,r=INT_MIN,u=INT_MAX,d=INT_MIN;
        for(int i=1;i<=grid.size();i++){
            for(int j=1;j<=grid[0].size();j++){
                if(grid[i-1][j-1]==1){
                    l=min(l,j-1);
                    r=max(r,j);
                    u=min(u,i-1);
                    d=max(d,i);
                }
            }
        }
        return ((r-l)*(d-u));
        
    }
};