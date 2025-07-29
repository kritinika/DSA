class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid){
        int n=grid.size();
        int f=0,s=0;
        int l=n*n;
        vector<int>arr(l+1,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                arr[grid[i][j]]++;
            }
        }
        
       for(int i=0;i<arr.size();i++){
        if(arr[i]==2) f=i;
        if(arr[i]==0)s=i;
        
        }
return {f,s};
        
    }
};