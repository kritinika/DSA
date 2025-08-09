class Solution {
public:
    int maxArea(vector<int>& h) {
        int ans=0,i=0,j=h.size()-1,maxii_h=0,w=0;
        while(i<j){
             maxii_h=min(h[i],h[j]);
             w=j-i;
            ans=max(ans,maxii_h*w);

            if(h[i]<h[j])i++;
            else j--;
        }
        ans=max(ans,maxii_h*w);
        return ans;
    }
};