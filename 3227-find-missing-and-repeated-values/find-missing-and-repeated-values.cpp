class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid){
        int n =grid.size(); int l =n*n;
        unordered_map<int ,int>mp;
        int fir =0,sec=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                mp[grid[i][j]]++;
            }
        }
        int xorr=0;
        int p=1;
    for(auto&[a,b]:mp){
        if(b==2){
            fir=a;
            xorr^=p;
            p++;
        }
            xorr^=a;
            xorr^=p;
            p++;
    }

return {fir,xorr};
        
    }
};