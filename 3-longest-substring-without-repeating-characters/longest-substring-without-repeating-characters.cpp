class Solution {
public:
    int lengthOfLongestSubstring(string s){
        int len =0,first =0,second=0;
        vector<bool>arr(256,0);
        while(second<s.size()){
            while(arr[s[second]]){
                arr[s[first]]=0;
                first++;   

            }
            arr[s[second]]=1;
            len =max(len,(second-first +1));
            second++;



        }


return len;
         

        
    }
};