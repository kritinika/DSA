class Solution {
public:
    bool isPalindrome(string s) {
        string ans;
        for(auto it:s){
            if(isalnum(it))ans+=tolower(it);
        
        }
        int i=0,j=ans.size()-1;
        while(i<j){
            if(ans[i]!=ans[j])return false;
            i++;j--;
            
        }
        return 1;
        
    }
};