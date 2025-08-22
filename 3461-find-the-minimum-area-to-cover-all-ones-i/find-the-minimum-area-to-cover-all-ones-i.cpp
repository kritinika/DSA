class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int l=INT_MAX,r=INT_MIN,u=INT_MAX,d=INT_MIN;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]){
                    l=min(l,j);
                    r=max(r,j);
                    u=min(u,i);
                    d=max(d,i);
                }
            }
        }
        return ((r-l+1)*(d-u+1));
        
    }
};