class Solution {
public:
    int findLucky(vector<int>& arr){
        unordered_map<int ,int>mp;
        for(auto it :arr){
            mp[it]++;
        }
        int count =-1;
        for(auto it :mp){
            if(it.first==it.second){
                count =max(count,it.first);
            }
          
        }
        return count;


        
    }
};