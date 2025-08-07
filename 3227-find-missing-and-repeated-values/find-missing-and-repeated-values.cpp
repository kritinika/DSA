class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
        int b=0,a=0;
        vector<int>check(n*n+1,0);
        for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
          check[grid[i][j]]++;
          if(check[grid[i][j]]==2)a=grid[i][j];
        }}

    for(int i=0;i<check.size();i++)if(check[i]==0)b=i;
    return {a,b};
        
}
};