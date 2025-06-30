class Solution {
public:
    vector<int> fairCandySwap(vector<int>& alice, vector<int>& bob){
        vector<int>ans;
        sort(alice.begin(),alice.end());
        sort(bob.begin(),bob.end());
      long long sum1 =accumulate(alice.begin(),alice.end(),0);
     long long sum2=accumulate(bob.begin(),bob.end(),0);
      int val =1;
      if(sum1>sum2)val=0;
    long long diff=abs(sum1-sum2);
    diff/=2;
    for(auto it:alice){
        for(auto t :bob){
                 if(val==0){
                if(it-t==diff)return {it,t};
                }
                else{
                    if(t-it==diff)return {it,t};
            
        }
    }
    }

  return ans;


        
        
    }
};