class Solution {
public:
bool check(string s,vector<int> arr){
    for(auto it :s){
        if(arr[it-'a']==0)return 0;
        else arr[it-'a']--;
        
    }
    return 1;
    
}
    int countCharacters(vector<string>& words, string chars) {
        int ans=0;
        vector<int>array(26,0);
        for(auto it:chars){
            array[it-'a']++;
        }
        for(int i=0;i<words.size();i++){
            if(check(words[i],array))ans+=words[i].size();
        }
        return ans;
        
        
    }
};