class Solution {
public:
    int maxArea(vector<int>& h) {
        int w,l,area=0;
        int i=0,j=h.size()-1;
        while(i<j){
            l=min(h[i],h[j]);
            w=j-i;
            area =max(area ,l*w);
            if(h[i]<h[j])i++;
            else j--;
            
        }

        return area;
    }
};