class Solution {
public:
    int maxProfit(vector<int>& p){
        int n=p.size();
        int bestbuy =p[0];
        int maxprofit =0;
        for(int i=1;i<n;i++){
            if(p[i]>bestbuy){
                maxprofit =max(maxprofit ,p[i]-bestbuy);
            }
        bestbuy =min(bestbuy ,p[i]);

        }
       return maxprofit; 
    }
};