class Solution {
public:
    int numSplits(string s){
        int n =s.size();
        int ans =0;
        unordered_map<char,int>mpp;
    int uni=0;
    for(int i=0;i<n;i++){
        if(!mpp.count(s[i]))uni++;
        mpp[s[i]]++;
    }
    unordered_set<char>st;int ll=0 ,rl=uni;
    for(int i=0;i<n-1;i++){
        st.insert(s[i]);
        ll=st.size();
        if(mpp[s[i]]==1){
            mpp.erase(s[i]);
            rl--;
        
        }
        else mpp[s[i]]--;
        if(ll==rl)ans++;
        
    }

return ans;
        
    }
};